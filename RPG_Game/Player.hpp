#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>

class Player
{
public:
    // funkcje ustawiania
    Player(std::string = "none", int = 1, int = 0);
    void setName(std::string);
    void setLevel(int);
    void setMaxHealth();
    void setHealth(int);
    void setMaxMP();
    void setMP(int);
    void setDamage();
    void setEXP(int);
    void setExpNeeded();

    // funkcje pobierania
    std::string getName();
    int getLevel();
    int getMaxHealth();
    int getHealth();
    int getMaxMP();
    int getMP();
    int getDamage(int);
    int getEXP();
    int getExpNeeded();

private:
    std::string playerName;
    int playerLevel;
    int playerMaxHealth;
    int playerHealth;
    int playerMaxMP;
    int playerMP;
    int playerBaseDamage;
    int playerEXP;
    int ExpNeeded;

};

#endif