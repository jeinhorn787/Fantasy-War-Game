/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for the Barbarian class.  It sets the strength and
armor accordingly, rolls it attack die randomly, rolls it defense die randomly and does proper
calculations.
***********************************************************************************************/

#include"Barbarian.hpp"

//constructor sets strength and armor
Barbarian::Barbarian() : Creature()
{
	this->strength = 12;
	this->armor = 0;
}

//rolls die randomly and returns the value
int Barbarian::attack()
{
	//2 random die roll 1-6 inclusive
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1;
	
	return die1 + die2;
}

//takes in attackers value, rolls its defense die and performs calculations
//to reduce the damage taken
void Barbarian::defense(int a)
{
	//2 random die and an int variable to hold the sum 
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1;
	int roll = die1 + die2;

	cout << "Barbarian rolled a defense of " << roll << endl;

	//total damage is the attack value minus the defense roll minus the armor value
	int damage = a - roll - armor;

	//if damage taken is greater than 0
	if (damage > 0)
	{
		cout << "Barbarian's armor and defense reduced the damage to " << damage << endl;
		//take damage away from strength
		strength -= damage;
	}

	//if 0 or negative damage 
	else
		cout << "Barabarian did not take any damage!" << endl;
}

//returns the name 
string Barbarian::getCreature()
{
	return "Barbarian";
}