#ifndef TYPESWEAPON_HPP
#define TYPESWEAPON_HPP

#include <iostream>

class Sword : public Weapon
{
public:
    Sword(int = 0);
  

};

class Axe : public Weapon
{
public:
    Axe(int = 1);


};

class Mace : public Weapon
{
public:
    Mace(int = 2);


};

class Bow : public Weapon
{
public:
    Bow(int = 3);


};

class Spear : public Weapon
{
public:
    Spear(int = 4);


};

class Fists : public Weapon
{
public:
    Fists(int = 99);


};

#endif