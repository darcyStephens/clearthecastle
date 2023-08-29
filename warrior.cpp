#include "player.h"
#include <string>
#include <iostream>
#include "warrior.h"

Warrior::Warrior()
{
     _name = "";
    _health = 0;
    _damage = 0;
    _weapon = "";

}

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
{
    _name = name;
    _health = health;
    _damage = damage;
    _weapon = weapon;

}

std::string Warrior::getWeapon()
{
    return _weapon;
}

void Warrior::swingWeapon(Player* opponent)
{
    
    Warrior::attack(opponent, _damage);
    std::string name  = Warrior::getName();
    std::string weapon  = Warrior::getWeapon();
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";

}
