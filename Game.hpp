/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the header file for the Game class. 
***********************************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP
#include"Creature.hpp"
#include"Vampire.hpp"
#include"Barbarian.hpp"
#include"BlueMen.hpp"
#include"Medusa.hpp"
#include"HarryPotter.hpp"
#include"input_validation.hpp"
#include"menu.hpp"

class Game
{
public:
	int askP1();
	int askP2();
	Creature* makeCreature(int);
};

#endif