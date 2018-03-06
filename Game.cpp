/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for the class Game.  It asks for Creature choices
for 2 different players, and also creates new Creatures using the users input.
***********************************************************************************************/

#include"Game.hpp"

//asks player 1 for their Creature choice
int Game::askP1()
{
	cout << "Player 1, please enter the number cooresponding to the Creature you'd like to use." << endl;
	cout << "1: Barbarian" << endl;
	cout << "2: Blue Men" << endl;
	cout << "3: Harry Potter" << endl;
	cout << "4: Medusa" << endl;
	cout << "5: Vampire" << endl;
	//input validation for a positive integer
	int pick = getUnsignedInt();

	//if the user enters lower than 1 or higher than 5, they must re-enter
	while (pick < 1 || pick > 5)
	{
		cout << "Error.  Please choose between 1 through 5 for your Creature choice." << endl;
		pick = getUnsignedInt();
	}

	return pick;
}

//asks player 2 for the Creature choice
int Game::askP2()
{

	cout << "Player 2, please enter the number cooresponding to the Creature you'd like to use." << endl;
	cout << "1: Barbarian" << endl;
	cout << "2: Blue Men" << endl;
	cout << "3: Harry Potter" << endl;
	cout << "4: Medusa" << endl;
	cout << "5: Vampire" << endl;
	//input validation for a positive integer
	int pick = getUnsignedInt();

	//while the user enters lower than 1 or higher than 5, they must re-enter
	while (pick < 1 || pick > 5)
	{
		cout << "Error.  Please choose between 1 through 5 for your Creature choice." << endl;
		pick = getUnsignedInt();
	}

	return pick;
}

//using the pick the user made, a new Creature type is returned
Creature* Game::makeCreature(int pick)
{
	if (pick == 1)
		return new Barbarian();

	else if (pick == 2)
		return new BlueMen();

	else if (pick == 3)
		return new HarryPotter();

	else if (pick == 4)
		return new Medusa();

	else if (pick == 5)
		return new Vampire();
}
