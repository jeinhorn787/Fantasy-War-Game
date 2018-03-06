/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the header file for the Creature class.  It is an abstract class with
purely virtual functionst that will be overriden in the sub classes.
***********************************************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP
#include<cstdlib>
#include<iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Creature
{
protected:
	int strength;
	int armor;

public:
	Creature();
	virtual ~Creature();
	virtual int attack() = 0;
	virtual void defense(int) = 0;
	int getStrength();
	int getArmor();
	virtual string getCreature() = 0;
};

#endif