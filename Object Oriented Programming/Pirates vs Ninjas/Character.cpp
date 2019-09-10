#include "Character.h"
#include <iostream>
#include <string>
using namespace std;
int health;

void Character(int charHealth)
{
	health = charHealth;
}

void getHealth()
{
	cout << "The character health is at " << health << endl;
}

void setHealth()
{
	if (health <= 0)
	{
		health = 0;
		cout << "Character has expired..." << endl;
	}
}

void Talk(string stuffToSay)
{
	cout << stuffToSay << endl;
}

void Talk(string name, string stuffToSay)
{
	cout << name << ", " << stuffToSay << endl;
}

void Character::Help()
{
	cout << "Help pls" << endl;
}