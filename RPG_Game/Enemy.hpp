#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <vector>

class Enemy
{
public:
	Enemy(int = 1, int = 1);
	void setDifficulty(int);
	void setEnemyLevel(int);
	void setEnemy();
	void setEnemyHealth(int);

	std::string getEnemyName();
	int getDifficulty();
	int getEnemyLevel();
	int getEnemyMaxHealth();
	int getEnemyHealth();
	int getEnemyDamage();
	int getRandEnemy();

private:
	std::string enemyName;
	int randEnemy;
	int enemyLevel;
	int enemyDifficulty;
	int enemyBaseDamage;
	int enemyMaxHealth;
	int enemyHealth;
	int enemyEXP;
};

#endif