/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for the class Creature.  The virutal functions
are undefined due to them being purely virtual
***********************************************************************************************/

#include"Creature.hpp"

Creature::Creature()
{
	//undefined as sub classes will set proper values
}

Creature::~Creature()
{
	//undefined 
}

//returns strength
int Creature::getStrength()
{
	return strength;
}

//returns armor
int Creature::getArmor()
{
	return armor;
}