/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for the class BlueMen.  It sets the strength and armor
accordingly, rolls its 2 attack die randomly, and has special cases in defense in regards to 
damage taken.
***********************************************************************************************/

#include"BlueMen.hpp"

//cosntructor sets strength and armor
BlueMen::BlueMen() : Creature()
{
	this->strength = 12;
	this->armor = 3;
}

//rolls 2 die randomly and returns the value
int BlueMen::attack()
{
	//2 random die roll from 1-10 inclusive
	int die1 = (rand() % 10) + 1;
	int die2 = (rand() % 10) + 1;

	return die1 + die2;
}

//rolls 3 defense die if the strength is greater than 8, 2 defense die if
//strength is between 4 and 9, and 1 die if strength is less than 4
void BlueMen::defense(int a)
{
	//if strength is greater than 8, roll 3 defense die randomly
	if (strength > 8)
	{
		//3 random die and an int to hold the sum
		int die1 = (rand() % 6) + 1;
		int die2 = (rand() % 6) + 1;
		int die3 = (rand() % 6) + 1;
		int roll = die1 + die2 + die3;

		cout << "Blue Men rolled a defense of " << roll << " using 3 die" << endl;

		//damage is attackers roll minus the defense roll minus the armor
		int damage = a - roll - armor;

		//if damage is greater than 0
		if (damage > 0)
		{
			cout << "Blue Men's armor and defense reduced the damage to " << damage << endl;
			//take damage away from strength
			strength -= damage;
		}

		//if damage is 0 or negative
		else
			cout << "Blue Men did not take any damage!" << endl;
	}

	//if strength is between 4 and 9, roll 2 die
	else if (strength > 4 && strength < 9)
	{
		//2 random die and an int variable to hold the sum
		int die1 = (rand() % 6) + 1;
		int die2 = (rand() % 6) + 1;
		int roll = die1 + die2;

		cout << "Blue Men rolled a defense of " << roll << " using 2 die" << endl;

		//damage is attacks roll minus defense roll minus armor
		int damage = a - roll - armor;

		//if damage is greater than 0
		if (damage > 0)
		{
			cout << "Blue Men's armor and defense reduced the damage to " << damage << endl;
			strength -= damage;
		}
		//if damage is 0 or negative
		else
			cout << "Blue Men did not take any damage!" << endl;
	}

	//if strength less than or equal to 4, roll 1 defense die
	else if (strength <= 4)
	{
		//1 random defense die
		int die1 = (rand() % 6) + 1;

		cout << "Blue Men rolled a defense of " << die1 << " using 1 die." << endl;

		//attackers roll minus the defense roll minus the armor
		int damage = a - die1 - armor;

		if (damage > 0)
		{
			cout << "Blue Men's armor and defense reduced the damage to " << damage << endl;
			strength -= damage;
		}
		//if damage is 0 or negative
		else
			cout << "Blue Men did not take any damage!" << endl;
	}
}

//returns name
string BlueMen::getCreature()
{
	return "Blue Men";
}