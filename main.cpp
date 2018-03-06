/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the main file.  The user can choose to play the game, which sets 2 pointers
to Creature as the 2 players.
***********************************************************************************************/

#include"Game.hpp"
#include<ctime>

int main()
{
	cout << "		Welcome to Fantasty Land!" << endl;
	
	//variable to hold users choice
	int choice = menu();

	//while the user chooses not to quit
	while (choice != 2)
	{
		//Game and 2 Creature objects created
		Game game;
		Creature *player1;
		Creature *player2;

		//using Game's ask functions, their choices are stored
		int p1 = game.askP1();
		int p2 = game.askP2();

		//2 new Creature objects are returned and stored in the respective players
		//pointer
		player1 = game.makeCreature(p1);
		player2 = game.makeCreature(p2);

		//round counter and a random number to decide who attacks first
		int round = 0;
		int start = rand() % 2;

		//while both Creature's strength is greater than 0
		while (player1->getStrength() > 0 && player2->getStrength() > 0)
		{
			//adds 1 for every new round
			round += 1;
			
			cout << "	Round " << round << endl;

			//if the random number is 0, player 1 attacks first
			if (start == 0)
			{
				//the number returned from player 1's attack is stored
				//then used in player 2's defense
				int attack1 = player1->attack();
				cout << player1->getCreature() << " rolls an attack of " << attack1 << endl;
				player2->defense(attack1);
				cout << endl;

				//if player 2's strength is greater than 0, it can still attack
				if (player2->getStrength() > 0)
				{
					//the number returned from player 2s's attack is stored
					//then used in player 1's defense
					int attack2 = player2->attack();
					cout << player2->getCreature() << " rolls an attack of " << attack2 << endl;
					player1->defense(attack2);
				}
			}

			//if the random number is not 0, player 2 attacks first
			else
			{
				//player 2's attack is stored then used in
				//player 1's defense
				int attack1 = player2->attack();
				cout << player2->getCreature() << " rolls an attack of " << attack1 << endl;
				player1->defense(attack1);
				cout << endl;

				//if player 1's strength is greater than 0, it can still attack
				if (player1->getStrength() > 0)
				{
					//player 1's attack is stored then used in player 2's defense
					int attack2 = player1->attack();
					cout << player1->getCreature() << " rolls an attack of " << attack2 << endl;
					player2->defense(attack2);
				}
			}
			
			//if both Creatures have greather than 0 strength
			if (player1->getStrength() > 0 && player2->getStrength() > 0)
			{
				//the rounds information is printed
				cout << endl;
				cout << player1->getCreature() << "'s (Player 1) strength: " << player1->getStrength() << endl;
				cout << player1->getCreature() << "'s (Player 1) armor: " << player1->getArmor() << endl;
				cout << player2->getCreature() << "'s (Player 2) strength: " << player2->getStrength() << endl;
				cout << player2->getCreature() << "'s (Player 2) armor: " << player2->getArmor() << endl;
				cout << endl;
			}
		}

		cout << endl;
		//if player 1 strength is less than or equal to 0, player 2 wins
		if (player1->getStrength() <= 0)
			cout << player2->getCreature() << " (Player 2) wins!" << endl;

		//if player 2 strength is less than or equal to 0, player 1 wins
		else if (player2->getStrength() <= 0)
			cout << player1->getCreature() << " (Player 1) wins!" << endl;

		//free the allocated memory stored in the player pointers
		delete player1;
		delete player2;

		cout << endl;
		//the starting menu pops up again
		choice = menu();
	}

	return 0;
}