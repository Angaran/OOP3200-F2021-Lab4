#include "StandardDeck.h"


#include <iostream>
#include <ostream>


StandardDeck::StandardDeck()
{
	PlayingCard* ptr = 0;
	// to initialize we have to use setter
	int SizeOfArray = 52;

	StandardDeck::Initialize();
}
//
//StandardDeck::~StandardDeck() {m_deckOfCards.clear()};
//
//void StandardDeck::SetSize(const StandardDeck& size)
//{
//	m_size = size;
//}

//StandardDeck::StandardDeck(const StandardDeck& other_deck)
//{
//	SetSize(other_deck);
//}
//
//StandardDeck& StandardDeck::operator=(const StandardDeck& other_deck)
//{
//	SetSize(other_deck);
//	return (*this);
//
//}

//StandardDeck StandardDeck::GetSize()
//{
//	return m_size;
//}


void StandardDeck::Initialize()
{
	/*const std::string* ptr = PlayingCard().CARD_SUIT;
	delete  &ptr;
	std::cout << ptr;*/
	// variable assign to pointer.
	// pointer to make i ndeck

	std::vector<PlayingCard>DeckOfCard;
	/*DeckOfCard = new std::vector<PlayingCard>();*/

	for (int suit = 0; suit < 4; suit++)
	{
		for (int rank = 1; rank < 13; rank++)
		{
			DeckOfCard.push_back(PlayingCard(rank, suit, false));

		}
	}
	int i = 0;
	while (i < DeckOfCard.size())
	{
		PlayingCard deckOfCards;
		deckOfCards = DeckOfCard.at(i);
		std::cout << deckOfCards.GetSuit() << " of " << deckOfCards.GetRank() << "\n";

		i++;
	}



	//std::string* aptr = &PlayingCard().GetRank();
}

//int DrawNextCard()
//{
//
//}
// int CardsRemaining()
//{
//	arraySize = 
//}




