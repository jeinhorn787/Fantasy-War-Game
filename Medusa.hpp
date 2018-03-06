/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the header file for the Medusa class. It inherits Creature.
***********************************************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include"Creature.hpp"

class Medusa : public Creature
{
public:
	Medusa();
	int attack();
	void defense(int a);
	string getCreature();
};

#endif