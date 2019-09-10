#include <string>
#include <iostream>
#include "GameDriver.h"
using namespace std;

int main()
{
	GameDriver GD;
	
	GD.RunAll();
	GD.DisplayIntro();

	cout << "First you have the Ninja!" << endl;
	
}