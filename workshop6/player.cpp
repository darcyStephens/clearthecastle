#include "player.h"
#include <string>
#include <iostream>

Player::Player()
{
    _name = "";
    _health = 0;
    _damage = 0;
}
Player::Player(std::string name, int health, int damage)
{
    _name = name;
    _health = health;
    _damage = damage;
};

std::string Player::getName()
{
    return _name;
}

int Player::getHealth()
{
    return _health;
}

int Player::getDamage()
{
    return _damage;
}
void Player::takeDamage(int damage)
{
    int health = _health;
    health -= damage;
    std::string name = Player::getName();
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

void Player::attack(Player *opponent, int damage)
{

    opponent->_health -= damage;
}
