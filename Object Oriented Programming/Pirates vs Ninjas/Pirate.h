#pragma once
#include "Character.h"
class Pirate :
	public Character
{
public:
	void UseSword();

	void attack() override
	{
		cout << "You hit for 25 damage!" << endl;
	}
};

