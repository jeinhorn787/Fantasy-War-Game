/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for the class HarryPotter.  It rolls its attack
die randomly and rolls defense die randomly then preforms necessary calculatons.  Harry's
strength is restored to 20 if he dies and has never died before.
***********************************************************************************************/

#include"HarryPotter.hpp"
using std::cout;
using std::endl;

//constructor sets strength and armor
HarryPotter::HarryPotter() : Creature()
{
	this->strength = 10;
	this->armor = 0;
}

//rolls 2 die randomly for an attack
int HarryPotter::attack()
{
	//2 random die from 1-6 
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1;

	return die1 + die2;
}

//rolls 2 defense die then does calculations.  If Harry dies and has not died before,
//his strength is restored to 20.  If Harry dies again, he cannot be revived.
void HarryPotter::defense(int a)
{
	//2 random die from 1-6 inclusive
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1;
	int roll = die1 + die2;

	cout << "Harry Potter rolled a defense of " << roll << endl;

	//damage is attackers roll minus the defense roll minus armor
	int damage = a - roll - armor;

	//if damage is greater than 0
	if (damage > 0)
	{
		cout << "Harry Potter's armor and defense reduced the damage to " << damage << endl;
		//take damage away from strength
		strength -= damage;
	}

	//if damage is 0 or negative
	else
		cout << "Harry Potter did not take any damage!" << endl;

	//if strength is 0 or less and Harry has not died before
	if (strength <= 0 && deathCounter < 1)
	{
		cout << "Harry Potter died but used Hogwartz, he revives even stronger!" << endl;
		//strength restored to 20, 1 death is added to death counter
		this->strength = 20;
		deathCounter += 1;
	}
}

//returns name
string HarryPotter::getCreature()
{
	return "Harry Potter";
}