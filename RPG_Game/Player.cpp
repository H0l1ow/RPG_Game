#include <iostream>
#include "Player.hpp"

Player::Player(std::string name, int level, int EXP, int gold)
{
    setName(name);
    setLevel(level);
    setEXP(EXP);
    setMaxHealth();
    setHealth(getMaxHealth());
    setMaxMP();
    setMP(getMaxMP());
    setDamage();
    setExpNeeded();
    setGold(gold);
}


// funkcje ustawiania
void Player::setName(std::string name)
{
    playerName = name;
}
void Player::setLevel(int level)
{
    playerLevel = level;
}
void Player::setMaxHealth()
{
    playerMaxHealth = (90 + (10 * getLevel()));
}
void Player::setHealth(int HP)
{
    playerHealth = HP;
}
void Player::setMaxMP()
{
    playerMaxMP = (45 + (5 * getLevel()));
}
void Player::setMP(int MP)
{
    playerMP = MP;
}
void Player::setDamage()
{
    playerBaseDamage = (10 * getLevel());
}
void Player::setEXP(int aktualEXP)
{
    playerEXP = aktualEXP;
}
void Player::setExpNeeded()
{
    ExpNeeded = 100 + ((getLevel() * getLevel()) * 10);
}
void Player::setGold(int pGold)
{
    playerGold = pGold;
}

// funkcje pobierania
std::string Player::getName()
{
    return playerName;
}
int Player::getLevel()
{
    return playerLevel;
}
int Player::getMaxHealth()
{
    return playerMaxHealth;
}
int Player::getHealth()
{
    return playerHealth;
}
int Player::getMaxMP()
{
    return playerMaxMP;
}
int Player::getMP()
{
    return playerMP;
}
int Player::getDamage(int wep)
{
    return playerBaseDamage + wep;
}
int Player::getEXP()
{
    return playerEXP;
}
int Player::getExpNeeded()
{
    return ExpNeeded;
}
int Player::getGold()
{
    return playerGold;
}