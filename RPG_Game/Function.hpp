#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <iostream>
#include "Pictures.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Weapon.hpp"
#include "typesWeapon.hpp"
#include "Grid.hpp"

void cursor(int, int);
void intro(Player&, int&);
void mapUI(Grid&, Player&, char&);
void loading();
void battle(Player&, int);
void accStatsMap(Player&);
void event(Grid&, Player&, char&, int);

//////////////////////////////////////////////////////
// testy inne

void testy(Player&, Sword&, Axe&, Fists&);
void testyEnemy();

#endif