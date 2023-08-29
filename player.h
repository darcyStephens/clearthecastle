#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player
{
    protected:
    std::string _name;
    int _health;
    int _damage;

    public:
    Player();
    Player(std::string name, int health, int damage);

    void attack(Player* opponent, int damage);

    void takeDamage(int damage);

    std::string getName();

    int getHealth();
    int getDamage();
};

#endif