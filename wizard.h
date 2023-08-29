#ifndef WIZARD_H
#define WIZARD_H
#include <string>
#include "player.h"
class Wizard: public Player
{
    private:
    int _mana;

    public:
    Wizard();
    Wizard(std::string name, int health, int damage, int mana);

    void castSpell(Player* opponent);
    int getMana();


};
#endif