#pragma once
#include "GameStructure.h"
#include <iostream>
#include <string>
using namespace std;

class Character :
	public GameStructure
{
public:
	string Name;

	virtual void attack()
	{
		cout << "You hit for 10 damage!" << endl;
	}

	virtual void Help() override;
};

