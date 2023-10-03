#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testInvoiceConstructor();
        testGetDollarsOwed();
        testGetInvoiceId();
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("EFGH");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        // Add more test cases here
    }

    void testInvoiceConstructor() {
        Invoice invoice("ABC");
        if ((invoice.getInvoiceId() != "ABC") || (invoice.getDollarsOwed() != 0)) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("ABC");
        invoice.addServiceCost(1); // Add a service cost to the invoice
        if (invoice.getDollarsOwed() != 1) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("XYZ");
        if (invoice.getInvoiceId() != "XYZ") {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }
};

#endif // INVOICETEST_H
