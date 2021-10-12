//Student 1 Name: Devanshu Dave
//Student 1 ID: 100785733
//Student 2 Name: Angaran Yogeswaran
//Student 2 ID: 100754161
//Date: October 9 2021
//Filename: OOP3200-F2020-Lab4

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
//Include Vector 
#include <vector>
//Include PlayingCard.h file
#include "PlayingCard.h"

class StandardDeck
{
public:
	
	// Declared the Initialize method
	void Initialize();

	// default constructor
	StandardDeck();
	//destructor
	~StandardDeck();
	// Rule of three:
	/*~StandardDeck();*/
	// declared the DrawNextCard method.
	void DrawNextCard();
	// declared the CardsRemaining method.
	int CardsRemaining();

	// Accessors:
	std::vector<PlayingCard> GetDeckOfCards();
	//Accessor for GetSize
	StandardDeck GetSize();
	// declared the printDeckOfCard method
	void PrintDeckOfCard();
	

private:
	//Declaring Vector of PlayCard DeckOfCard
	std::vector<PlayingCard>DeckOfCard;
	//Private Varuable m_size set to size of 52
	int m_size = 52;
	};


#endif /* defined (__STANDARD_DECK__) */



