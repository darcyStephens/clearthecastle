#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <string>

class Appliance
{
    protected:
    int _powerRating;
    bool _isOn;


    public:
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    int get_powerRating();
    bool get_isOn();
    int set_powerRating(int number);
    bool set_isOn(bool state);
    virtual double getPowerConsumption();
    
   //virtual int getPowerConsumption();



};

#endif