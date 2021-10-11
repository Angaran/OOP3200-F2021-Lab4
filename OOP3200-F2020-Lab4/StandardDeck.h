/** OOP3200. F2020. StandardDeck.h
 *
 *  In this lab you will create your own collection class called StandardDeck, which
 *	will 'contain' objects of the PlayingCard class.  The intent of the class is to
 *	represent a standard deck of 52 cards that might be useful in a card game type
 *	application.  
 *
 *	@author		Thom MacDonald
 *	@author		Tom Tsiliopoulos
 *	@version	2020.10
 *	@since		Jul 2018
 *	@see		Bronson, G. (2012). A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/

#pragma once
#ifndef __STANDARD_DECK__
#define __STANDARD_DECK__

#include <vector>

#include "PlayingCard.h"

class StandardDeck
{
public:
	// Initialization:
	// Default Constructor
	//StandardDeck();
	//// declaring the initializing method. as a void
	//void Initialize();
	//// Rule of three:

	//// Accessors:
	//std::vector<PlayingCard*> GetDeckOfCards() const;
	//int GetSizeArray();
	//// Mutators:
	////SetDeckOfCards(std::string deck_of_cards)
	////{
	////	m_deck_of_Cards = deck_of_cards;
	////}



		void Initialize();

		/*int DrawNextCard();*/
		// Initialization:
		StandardDeck();
		// Rule of three:
		/*~StandardDeck();*/
		/*void SetSize(const StandardDeck& size);
		StandardDeck(const StandardDeck& other_deck);
		StandardDeck& operator =(const StandardDeck& other_deck);*/
		// Accessors:
		StandardDeck GetSize();
		// Mutators:
		/*void SetSize(int size);*/

	private:
		std::vector<PlayingCard>m_deckOfCards;
		int m_size = 52;
	};


#endif /* defined (__STANDARD_DECK__) */



