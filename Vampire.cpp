/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for the Vampire class.  It rolls an attack die
randomly and 1 defense die randomly.  Vampire can use a charm which will negate the attack done 
on the Vampire. There is a 50% chance this will happen each round.
***********************************************************************************************/

#include"Vampire.hpp"
using std::cout;
using std::endl;


//constructor sets strength and armor
Vampire::Vampire() : Creature()
{
	this->strength = 18;
	this->armor = 1;
}

//rolls attack die randomly
int Vampire::attack()
{
	//1 random attack die from 1-12 inclusive
	int die = (rand() % 12) + 1;

	return die;
}

//rolls defense die randomly and performs calculations. an randomy integer from 0-1
//determines whether charm will actiavte, which negates the damage done to Vampire
void Vampire::defense(int a)
{
	//1 random die from 1-12 inclusive.  a random number from 0-1 
	//is used to determine if charm activates
	int die = (rand() % 6) + 1;
	int charm = rand() % 2;

	cout << "Vampire rolled a defense of " << die << endl;

	//damage is attackers roll minus defense roll minus armor
	int damage = a - die - armor;

	//if damage is greater than 0
	if (damage > 0)
	{
		cout << "Vampire's armor and defense reduced the damage to " << damage << endl;
		//take damage away from strength
		strength -= damage;

		//if charm is 1, negate the attack, returning strength back to what it was
		if (charm == 1)
		{
			cout << "Vampire used Charm!" << endl;
			strength += damage;
		}

	}
	//if damage is 0 or negative
	else
		cout << "Vampire did not take any damage!" << endl;

}

//returns name
string Vampire::getCreature()
{
	return "Vampire";
}