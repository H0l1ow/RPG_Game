#ifndef GRID_HPP
#define GRID_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <vector>

class Grid
{
public:
	Grid(char = 'X', char = '#', char = 'E', char = '.', int = 0, int = 0);

	//renderowanie mapy

	void renderGrid();
	void importBackGround();
	char playerMove(char);
	void playerCursor();
	void textCursor();
	
	bool getMapPoint();

private:
	int playerPosX;				//p1 start pos
	int playerPosY;
	char findPlayerStart;
	char findPath;
	char findEnemy;
	char afterMove;
	std::string line;
	std::vector< std::vector<char> > Map;	
};

#endif