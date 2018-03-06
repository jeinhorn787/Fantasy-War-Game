/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the header file for the HarryPotter class.  It inherits Creature.  It has 
a private variable to keep track of how many times Harry died because he can revive if he hasn't 
died once already.
***********************************************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include"Creature.hpp"

class HarryPotter : public Creature
{
private:
	int deathCounter = 0;

public:
	HarryPotter();
	int attack();
	void defense(int a);
	string getCreature();
};

#endif