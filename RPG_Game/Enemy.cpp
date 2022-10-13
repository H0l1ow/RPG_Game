#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(int difficulty, int eLevel)
{
    setDifficulty(difficulty);
    setEnemyLevel(eLevel);
    setEnemy();
    setEnemyHealth(getEnemyMaxHealth());

}

// funkcje ustawiania
void Enemy::setDifficulty(int diff) 
{
    enemyDifficulty = diff;
}
void Enemy::setEnemyLevel(int eLVL)
{
    enemyLevel = eLVL;
}
void Enemy::setEnemy()
{
    std::vector<std::string> enemies{ "Gblin", "Orc", "Skeleton", "Rogue", "Dragon", "Very Very Black Mage", "Geralt form Rivia" };
    randEnemy = rand() % enemies.size();
    
    switch (randEnemy)
    {
        case 0: //goblin
        {
            enemyName = enemies[randEnemy];
            enemyBaseDamage = getDifficulty() * getEnemyLevel() * 10;
            enemyMaxHealth = (getDifficulty() * getEnemyLevel() * 10) + 50;
            enemyEXP = (getDifficulty() * getEnemyLevel() * 10) / 2;
            break;
        }
        case 1: // orc
        {
            enemyName = enemies[randEnemy];
            enemyBaseDamage = getDifficulty() * getEnemyLevel() * 15;
            enemyMaxHealth = (getDifficulty() * getEnemyLevel() * 10) + 70;
            enemyEXP = (getDifficulty() * getEnemyLevel() * 20) / 2;
            break;
        }
        case 2: // skeleton
        {
            enemyName = enemies[randEnemy];
            enemyBaseDamage = getDifficulty() * getEnemyLevel() * 20;
            enemyMaxHealth = (getDifficulty() * getEnemyLevel() * 10) + 80;
            enemyEXP = (getDifficulty() * getEnemyLevel() * 30) / 2;
            break;
        }
        case 3: // rogue
        {
            enemyName = enemies[randEnemy];
            enemyBaseDamage = getDifficulty() * getEnemyLevel() * 25;
            enemyMaxHealth = (getDifficulty() * getEnemyLevel() * 10) + 90;
            enemyEXP = (getDifficulty() * getEnemyLevel() * 40) / 2;
            break;
        }
        case 4: // dragon
        {
            enemyName = enemies[randEnemy];
            enemyBaseDamage = getDifficulty() * getEnemyLevel() * 50;
            enemyMaxHealth = (getDifficulty() * getEnemyLevel() * 10) + 150;
            enemyEXP = (getDifficulty() * getEnemyLevel() * 50) / 2;
            break;
        }
        case 5: // very black mage
        {
            enemyName = enemies[randEnemy];
            enemyBaseDamage = getDifficulty() * getEnemyLevel() * 40;
            enemyMaxHealth = (getDifficulty() * getEnemyLevel() * 10) + 90;
            enemyEXP = (getDifficulty() * getEnemyLevel() * 100) / 2;
            break;
        }
        case 6: // Geralt
        {
            enemyName = enemies[randEnemy];
            enemyBaseDamage = getDifficulty() * getEnemyLevel() * 100;
            enemyMaxHealth = (getDifficulty() * getEnemyLevel() * 10) + 240;
            enemyEXP = (getDifficulty() * getEnemyLevel() * 500) / 2;
            break;
        }
        default:
        {
            std::cout << "Missing N0\n";
            break;
        }

    }
}
void Enemy::setEnemyHealth(int eHP)
{
    enemyHealth = eHP;
}

// funkcje pobierania
std::string Enemy::getEnemyName()
{
    return enemyName;
}
int Enemy::getDifficulty()
{
    return enemyDifficulty;
}
int Enemy::getEnemyLevel()
{
    return enemyLevel;
}
int Enemy::getEnemyMaxHealth()
{
    return enemyMaxHealth;
}
int Enemy::getEnemyHealth()
{
    return enemyHealth;
}
int Enemy::getEnemyDamage()
{
    return enemyBaseDamage;
}
int Enemy::getRandEnemy()
{
    return randEnemy;
}