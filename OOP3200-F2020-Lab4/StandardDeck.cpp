//Student 1 Name: Devanshu Dave
//Student 1 ID: 100785733
//Student 2 Name: Angaran Yogeswaran
//Student 2 ID: 100754161
//Date: October 9 2021
//Filename: OOP3200-F2020-Lab4
#include "StandardDeck.h"

//Include iostream for cout and ostream for output
#include <iostream>
#include <ostream>


StandardDeck::StandardDeck()
{	//Declare pointer and set it to 0/NULL
	PlayingCard* ptr = 0;
	// to initialize we have to use setter
	int SizeOfArray = 52;
	//Calling Initialize Method
	StandardDeck::Initialize();
}
// defination of destructor
StandardDeck::~StandardDeck() { DeckOfCard.clear(); };


//defination of Initialize Method
void StandardDeck::Initialize()
{

	//if the pointer is equal to 0
	if(PlayingCard* ptr = 0)
	{
		//delete the pointer
		delete ptr;
	}
	//else
	else
	{
		//allocate the pointer a size of 52
		ptr = (PlayingCard*)malloc(sizeof(52));
	}

	std::vector<PlayingCard>DeckOfCard;
	/*DeckOfCard = new std::vector<PlayingCard>();*/
	// for loop to push the rank of the card and suits of the card to the vector.
	for (int suit = 0; suit < 4; suit++)
	{
		for (int rank = 1; rank < 13; rank++)
		{
			// push into the vector
			DeckOfCard.push_back(PlayingCard(rank, suit, false));

		}
	}



	//std::string* aptr = &PlayingCard().GetRank();
}


//DrawNextCard Defintion
void StandardDeck::DrawNextCard()
{

	PlayingCard nextCard;
	//Set nextCard equal first element of DeckOfCard
	nextCard = DeckOfCard[0];

	// printing
	std::cout << nextCard.GetSuit() << " of " << nextCard.GetRank() << "\n";
	/*return std::cout << nextCard.GetSuit() << " of " << nextCard.GetRank() << "\n";;*/
	/* return 0;*/
}

//Cards Remaining Definition
int StandardDeck::CardsRemaining()
{
	//Return the size of DeckOfCards Accessor
	return GetDeckOfCards().size();
}

std::vector<PlayingCard> StandardDeck::GetDeckOfCards()
{
	//return DeckOfCard
	return DeckOfCard;
}
//PrintDeckOfCard method defintion
void StandardDeck::PrintDeckOfCard()
{	
	int i = 0;
	//While loop to print all the elements of DeckOfCards.
	while (i < DeckOfCard.size())
	{
		PlayingCard deckOfCards;
		deckOfCards = DeckOfCard.at(i);
		std::cout << deckOfCards.GetSuit() << " of " << deckOfCards.GetRank() << "\n";

		i++;
	}

}
