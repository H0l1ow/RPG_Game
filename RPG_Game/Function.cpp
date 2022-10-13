#include <iostream>
#include "Function.hpp"


void cursor(int x, int y)
{
    COORD position = { x, y }; // default 
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, position);
}

void intro(Player& p1, int& diff)
{
    std::string nameX;
    
    system("cls");

    whichScenarioPic(0);
    cursor(20, 12);
    std::cout << "Welcome stranger! Please tell me your name: "; std::getline(std::cin, nameX);
        p1.setName(nameX);
        Sleep(1000);
    
    system("cls");
    whichScenarioPic(1);
    cursor(30, 12);
    std::cout << "Choose difficulty of the game: "; std::cin >> diff;
    if (diff > 10)
    {
        system("cls");
        cursor(40, 12);
        Sleep(1000);
        std::cout << "You will die soon" << std::endl;
        Sleep(2000);
    }

    system("cls");
    Sleep(1000);
    whichScenarioPic(2);
    cursor(5, 10);
    std::cout << "Greetings " << p1.getName() << " and welcome to this dark world\n";
    std::cout << "\tYour level is: " << p1.getLevel() << " and you have: " << p1.getEXP() << "/" << p1.getExpNeeded() << " exp" << "\n"; Sleep(2000);
    for (int i = 5; i > 0; i--)
    {
        cursor(20, 13);
        std::cout << "You will enter the map in: " << i;
        Sleep(1000);
    }
}

void mapUI(Grid& grid, Player& pT1, char& odp)
{
    system("cls");
    grid.playerMove(odp);
    grid.renderGrid();
    accStatsMap(pT1);
    grid.playerCursor();
    grid.textCursor();
}

void loading()
{
    for (int couter = 5; couter > 0; couter--)
    {
        std::cout << "\n\n\n\n\n";
        std::cout << "\t\t\t\t\t\t//////////////////////////\n";
        std::cout << "\t\t\t\t\t\tPrepare for random battle!\n";
        std::cout << "\t\t\t\t\t\t//////////////////////////\n";
        std::cout << "\n\t\t\t\t\t\tTime left: " << "\t" << couter << "\n";
        Sleep(1000);
        system("cls");
    }
}

void battle(Player& acc, int diff)
{ 
    int localRand = rand() % 3 + 1;
    Enemy en1(diff, acc.getLevel() + localRand);
    
    system("cls");
    loading();

    while (acc.getHealth() >= 0 && en1.getEnemyHealth() >= 0)
    {
        system("cls");
        std::cout << "\t\tLv. " << en1.getEnemyLevel() << "\t" << en1.getEnemyName() << "\tHP " << en1.getEnemyHealth() << "/" << en1.getEnemyMaxHealth() << "\n";
        
        whichPicWep(99);

        acc.setHealth(acc.getHealth() - 5);
        en1.setEnemyHealth(en1.getEnemyHealth() - 50);

        std::cout << "\t\t\t\t\tLv. " << acc.getLevel() << "\t" << acc.getName() << "\tHP " << acc.getHealth() << "/" << acc.getMaxHealth() << "\tMP " << acc.getMP() << "/" << acc.getMaxMP() << "\tEXP " << acc.getEXP() << "/" << acc.getExpNeeded() << "\n";
        Sleep(1500);
    }    
}

void accStatsMap(Player& p1)
{
    std::cout << "\n\t\t\t\tLv. " << p1.getLevel() << "\t" << p1.getName() << "\tHP " << p1.getHealth() << "/" << p1.getMaxHealth() << "\tMP " << p1.getMP() << "/" << p1.getMaxMP() << "\tEXP " << p1.getEXP() << "/" << p1.getExpNeeded() << "\n";
}

void event(Grid& gE, Player& pE, char& sayE, int diff)
{
    if (gE.getMapPoint() == true)
    {
        battle(pE, diff);
    }
    else
    {
        std::cout << "\nSay: "; std::cin >> sayE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////
// testy inne

void testy(Player& p1, Sword& swT, Axe& axT, Fists& fsT)
{
    Sleep(1500);
    system("cls");

    std::string nameX;

    std::cout << "Welcome stranger! Please tell me your name: "; std::cin >> nameX;
    p1.setName(nameX);

    Sleep(1000);

    std::cout << "Greetings " << p1.getName() << " and welcome to this dark world\n";
    std::cout << "Your level is: " << p1.getLevel() << " and you have: " << p1.getEXP() << "/" << p1.getExpNeeded() << " exp" << "\n";
    Sleep(1500);

    std::cout << "\nTest Nazwa AXE: " << axT.getWname();
    std::cout << "\n" << "Test SWORD " << swT.getWname() << " dmg: " << swT.getWDamage();
    swT.setIfCritical();
    std::cout << "\n" << "25% Crit chance + " << p1.getName() << " dmg * " << swT.getWname() << " dmg: " << p1.getDamage(swT.getWDamage());
    std::cout << "\n" << "Test zasieg " << swT.getWname() << ": " << swT.getRange();
    std::cout << "\n" << "Test " << fsT.getWname() << " dmg: " << fsT.getWDamage();
    std::cout << "\n";
    Sleep(18500);
}
void testyEnemy()
{
    int dLVL2, eLVL2;

    std::cout << "Choose difficulty of the game: "; std::cin >> dLVL2;
    std::cout << "Choose enemy level: "; std::cin >> eLVL2;
    Enemy e3(dLVL2, eLVL2);
    std::cout << "Diff lvl: " << e3.getDifficulty() << "!\n";
    std::cout << "Rand enemy name: " << e3.getEnemyName() << "\n";
    std::cout << "Enemy HP: " << e3.getEnemyHealth() << "/" << e3.getEnemyMaxHealth() << "\n";
    std::cout << "Enemy Dmg: " << e3.getEnemyDamage() << "\n";

    Sleep(18500);
}