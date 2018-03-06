/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the header file for the BlueMen class.  It inherits Creature class.
***********************************************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include"Creature.hpp"

class BlueMen : public Creature
{
public:
	BlueMen();
	int attack();
	void defense(int a);
	string getCreature();
};

#endif