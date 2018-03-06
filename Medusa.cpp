/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for Medusa.  It rolls 2 attack die randomly and
1 defense die randomly.  Medusa can have an insant kill attack if her attack die roll a 12
***********************************************************************************************/

#include"Medusa.hpp"
using std::cout;
using std::endl;

//constructor sets strength and armor
Medusa::Medusa() : Creature()
{
	this->strength = 8;
	this->armor = 3;
}

//rolls 2 die randomly.  if those 2 die equal 12, Medusa returns a very high number
//that will instantly kill the opponent
int Medusa::attack()
{
	//2 random die from 1-6 inclusive
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1;
	int roll = die1 + die2;

	//if the roll is 12, the instant kill attack is returned
	if (roll == 12)
	{
		cout << "Medusa used Glare!" << endl;
		return 1000;
	}

	return roll;
}

//1 defense die rolled randomly and calculations are done for damage taken
void Medusa::defense(int a)
{
	//1 random die from 1-6
	int die = (rand() % 6) + 1;

	cout << "Medusa rolled a defense of " << die << endl;

	//damage is attackers roll minus the defense roll minus the armor
	int damage = a - die - armor;

	//if the damage is greater than 0
	if (damage > 0)
	{
		cout << "Medusa's armor and defense reduced the damage to " << damage << endl;
		//take the damage away from strength
		strength -= damage;
	}
	//if damage is 0 or negative
	else
		cout << "Medusa did not take any damage!" << endl;
}

//returns name
string Medusa::getCreature()
{
	return "Medusa";
}