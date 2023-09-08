#ifndef APP_H
#define APP_H
class App
{
    protected:
    int _powerRating;
    bool _isOn;


    public:
    App();
    App(int powerRating);
    void turnOn();
    void turnOff();
    double virtual getPowerConsumption()
    {
        return 0.0;
    };
    int get_powerRating();
    void set_powerRating(int powerRating);
    bool get_isOn();
    void set_isOn(bool state);





};
#endif 
