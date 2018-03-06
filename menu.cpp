/**********************************************************************************************
** Program: Project 3 (Creatures)
** Author: Jeremy Einhorn
** Date: August 4, 2017
** Description: This is the implementation file for the menu. It has 2 options for the user to
choose from.
***********************************************************************************************/

#include"menu.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int menu()
{
	//int to hold users choice
	int choice;

	cout << "1: Fantasy Combat" << endl;
	cout << "2: Quit" << endl;

	cout << "Please enter a number, either 1 or 2, for you choice." << endl;
	//input validation for a positive integer
	choice = getUnsignedInt();

	//while choice is neither 1 or 2, the user must re-enter
	while (choice != 1 && choice != 2)
	{
		cout << "Error.  Please enter either 1 or 2." << endl;
		choice = getUnsignedInt();
	}

	switch (choice)
	{
	case 1:
		return 1;

	case 2:
		return 2;
	}

	return 2;
}