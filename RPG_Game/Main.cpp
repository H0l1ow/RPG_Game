#include <iostream>
#include <ctime>
#include <Windows.h>
#include <time.h>
#include "Pictures.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Weapon.hpp"
#include "typesWeapon.hpp"
#include "Grid.hpp"
#include "Function.hpp"


int main()
{
    //LOSOWOSC
    
    srand(static_cast<unsigned int>(time(NULL)));
    
    //TEST ZMIENNE

    char odp = '0';
    int difficulty = 1; 

    //TESTY OBIEKTY
    Grid grid;
    Player pT1;
    Enemy pE1;
    Sword swT1;         
    Axe axT1;
    Fists fsT1;

    //IMPORTOWANIE MAPY

    grid.importBackGround();

    //WSTEP DO GRY

    intro(pT1, difficulty);

    while (odp != 'q' && pT1.getHealth() >= 0)
    {
        mapUI(grid, pT1, odp);
        event(grid, pT1, odp, difficulty);
    }   

    return 0;
}


