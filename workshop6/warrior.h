#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "player.h"
class Warrior: public Player
{
    private:
    std::string _weapon;

    public:
    Warrior();
    Warrior(std::string name, int health, int damage, std::string weapon);
    
    void swingWeapon(Player* opponent);
    std::string getWeapon();


};
#endif