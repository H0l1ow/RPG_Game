#include <iostream>
#include "Grid.hpp"

Grid::Grid(char p1, char path, char enemy, char after, int pX, int pY)
{
	findPlayerStart = p1;
	findPath = path;
	findEnemy = enemy;
	afterMove = after;
	playerPosX = pX;
	playerPosY = pY;
}

void Grid::renderGrid() // oryginal
{
	for (int column = 0; column < Map.size(); column++)
	{
		for (int row = 0; row < Map[column].size(); row++)
		{
			// Szukanie pozycji startowej playera
			if (Map[column][row] == findPlayerStart)
			{
				playerPosX = row;
				playerPosY = column;
				Map[column][row] = afterMove;
			}

			std::cout << Map[column][row];
		}
		std::cout << "\n";
	}
}


void Grid::importBackGround()
{
	std::fstream fileOpen;
	fileOpen.open("Map.txt", std::ios::in);

	if (!fileOpen.is_open())
	{
		std::cout << "Background not found!" << std::endl;
		Sleep(4000);
		exit(0);
	}
	else
	{
		while (std::getline(fileOpen, line)) {
			std::vector<char> temp;

			for (char c : line) {
				temp.push_back(c);
			}
			Map.push_back(temp);
		}
	}
	fileOpen.close();
}


char Grid::playerMove(char input)		//poruszanie tylko po sciezce '#' oraz niszczenie drogi za soba
{
	if (input == 'w')
	{
		if (Map[playerPosY - 1][playerPosX] == findPath || Map[playerPosY - 1][playerPosX] == findEnemy)
		{
			Map[playerPosY][playerPosX] = afterMove;
			return playerPosY -= 1;
		}
	}
	else if (input == 's')
	{
		if (Map[playerPosY + 1][playerPosX] == findPath || Map[playerPosY + 1][playerPosX] == findEnemy)
		{
			Map[playerPosY][playerPosX] = afterMove;
			return playerPosY += 1;
		}
	}
	else if (input == 'a')
	{
		if (Map[playerPosY][playerPosX - 1] == findPath || Map[playerPosY][playerPosX - 1] == findEnemy)
		{
			Map[playerPosY][playerPosX] = afterMove;
			return playerPosX -= 1;
		}
	}
	else if (input == 'd')
	{
		if (Map[playerPosY][playerPosX + 1] == findPath || Map[playerPosY][playerPosX + 1] == findEnemy)
		{
			Map[playerPosY][playerPosX] = afterMove;
			return playerPosX += 1;
		}
	}
}


void Grid::playerCursor()
{
	COORD position = { playerPosX, playerPosY };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, position);
	std::cout << "P";
}

void Grid::textCursor()
{
	COORD position = { 0, Map.size() + 1}; // default 
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, position);
}

bool Grid::getMapPoint()
{
	if (Map[playerPosY][playerPosX] == findEnemy)
	{
		Map[playerPosY][playerPosX] = afterMove;
		return true;
	}
	else
	{
		return false;
	}
}

