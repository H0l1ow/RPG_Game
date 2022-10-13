#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <vector>

class Weapon
{

public:
    Weapon(int);

    //funkcje ustawiania

    void setWName(int);
    void setWDamage(int);
    void setIfCritical();

    // funkcje pobierania

    std::string getWname();
    int getWDamage();
    int getRange();
    void defend();


private:                                  // bazowe statystyki
    std::string WName;
    unsigned int damage;
    unsigned int range;
    int rng_god;                    // losowanie czy bedzie critical (rng_god = %)
    bool special_effect;         // czy bron ma jakies ulepszenie

};

#endif