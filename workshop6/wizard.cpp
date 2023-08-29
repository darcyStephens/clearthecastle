#include "player.h"
#include <string>
#include <iostream>
#include "wizard.h"

Wizard::Wizard()
{
     _name = "";
    _health = 0;
    _damage = 0;
    _mana = 0;

}

Wizard::Wizard(std::string name, int health, int damage, int mana)
{
    _name = name;
    _health = health;
    _damage = damage;
    _mana = mana;

}

int Wizard::getMana()
{
    return _mana;
}

void Wizard::castSpell(Player* opponent)
{
    int damage = Wizard::getMana();
    Wizard::attack(opponent, damage);
    std::string name  = Wizard::getName();
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";

}
