/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the header file for the Vampire  class.  It inherits Creature.
***********************************************************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include"Creature.hpp"

class Vampire : public Creature
{
public:
	Vampire();
	int attack();
	void defense(int a);
	string getCreature();
};

#endif