#pragma once
#include "Character.h"
class Ninja :
	public Character
{
public:
	void ThrowStars();

	void attack() override
	{
		cout << "You hit for 25 damage!" << endl;
	}
};

