//Student 1 Name: Devanshu Dave
//Student 1 ID: 100785733
//Student 2 Name: Angaran Yogeswaran
//Student 2 ID: 100754161
//Date: October 9 2021
//Filename: OOP3200-F2020-Lab4
#include <ctime>
#include <iostream>
#include "StandardDeck.h"

void Pause() {
	std::cout << "\nPress \'ENTER\' to continue..." << std::endl;
	std::cin.ignore();	fflush(stdin);
}

int main()
{
	StandardDeck obj;
	/*	Your main() function should demonstrate each of the features of the StandardDeck class*/
	srand(time(nullptr)); // seed the random number generator
		// create a deck
	StandardDeck();
	// Show the deck object as initialized
	obj.PrintDeckOfCard();
	//Calling Pause Function
	Pause();
	
	// Draw the next card and show it
	obj.DrawNextCard();
	// Draw a random card and show it

	// Show the deck with the remaining cards
	 std::cout << "\nThe remaining cards are " << obj.CardsRemaining();
	/*std::cout << "The remaining cards are " << obj.CardsRemaining();*/
}


