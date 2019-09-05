#include "GameDriver.h"
#include <iostream>
//todo: use todo for task lists

void GameDriver::main()
{
	DisplayIntro();
}

void GameDriver::DisplayIntro()
{
	std::cout << "\n\n\t\tWelcome to Pirates vs Ninjas!" << endl;
}

void GameDriver::DisplayGameStats()
{
	std::cout << "\nHere are the players stats!\n\n";
}