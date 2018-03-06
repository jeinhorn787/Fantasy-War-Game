/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the header file for the Barbarian class.  It inherits Creature class.
***********************************************************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include"Creature.hpp"

class Barbarian : public Creature
{
public:
	Barbarian();
	int attack();
	void defense(int a);
	string getCreature();
};

#endif