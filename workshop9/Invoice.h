#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    private:
    std::string invoiceId;
    int dollarsOwed;

    public:
    Invoice(std::string  invoiceId); // onstructor that initializes an invoice with a given invoice ID
    void addServiceCost(int costDollars); // Adds the cost of a service to the current invoice in dollars. Accepts only positive dollar amounts
    int getDollarsOwed(); // Returns the total amount owed in dollars for the services on the invoice
    std::string getInvoiceId(); // Returns the unique identifier (ID) for the invoice.

};

#endif // INVOICE_H
