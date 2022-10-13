#include <iostream>
#include "Weapon.hpp"


Weapon::Weapon(int typ)
{
    setWName(typ);
    setWDamage(typ); 
}

//funkcje ustawiania

void Weapon::setWName(int typBroni)
{
    std::vector<std::string> name_1{ "Wielki", "Maly", "Duzy", "Sredni", "Ogromny", "Skromny", "Czarny" };
    std::vector<std::string> typ{ "Miecz", "Topor", "Buzdygan", "Luk", "Wlocznia" };
    std::vector<std::string> name_2{ "Mojzesza", "MarJowity", "Troglodyty", "Dzbana", "Jezusa", "Kulfona", "Malpy", "Dziada", "Mudzyna", "Ziemniaka", "Anusa" };

    int firstName = rand() % name_1.size();
    int secondName = rand() % name_2.size();

    if (typBroni < typ.size())
    {
        WName = name_1[firstName] + " " + typ[typBroni] + " " + name_2[secondName];
    }
    else
    {
        WName = "Brudne Piesci";
    }
}


void Weapon::setWDamage(int typBroni)
{
    switch (typBroni)
    {
        case 0:
        {
            damage = 20;            // miecz 
            range = 5;                
            rng_god = 25;
            break;
        }
        case 1:
        {
            damage = 40;            // topor
            range = 5;
            rng_god = 10;
            break;
        }
        case 2:
        {
            damage = 30;            //buzdygan
            range = 5;
            rng_god = 15;
            break;
        }
        case 3:
        {
            damage = 35;            // luk
            range = 15;
            rng_god = 35;
            break;
        }
        case 4:
        {
            damage = 25;            // wlocznia
            range = 5;
            rng_god = 20;
            break;
        }
        default:
        {
            damage = 1;             // piesci
            range = 1;
            rng_god = 50;
            break;
        }
    }       
}

void Weapon::setIfCritical()
{
    int zmienna_spr = rand() % 101;

    if (zmienna_spr >= 100 - rng_god)                   // pomyslec o zmiennej by wiecznie nie inkrementowala dmg
    {
        damage *= 3;
    }
    else
    {
        damage;
    }
}

// funkcje pobierania

std::string Weapon::getWname()
{
    return WName;
}

int Weapon::getWDamage()
{
    return damage;
}

int Weapon::getRange()
{
    return range;
}

void Weapon::defend()
{
    std::cout << "You used defend" << std::endl;
}
