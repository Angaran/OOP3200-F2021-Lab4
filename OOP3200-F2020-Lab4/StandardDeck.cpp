#include "StandardDeck.h"

#include <iostream>
#include <stack>
#include <vector>


StandardDeck::StandardDeck()
{

	/*PlayingCard().SetValue*/
	/*PlayingCard().SetSuit(0);*/
	//PlayingCard().CARD_SUIT[] = 0;
	/*int * pointer ;
	*pointer != NULL;*/
	/*&m_deck_of_Cards == nullptr;*/

	&GetDeckOfCards() == 0;
	Initialize();
	SetSizeOfArray();

}

void StandardDeck::Initialize()
{
	/*for(int i = 0; i < 4; i++)
	{*/

	//	delete[] & PlayingCard().CARD_SUIT;
	///*}*/
	////for (int j = 0; j < 13; j++)
	////{

	//	delete[] & PlayingCard().CARD_RANK;
	/*}*/

	//if(NULL != pointer)
	//{
	//	
	//}
	////{
	//	delete
	//}
	// check if the private member pointer is not equal to 0.
	std::vector <PlayingCard>deck_of_Cards;
	/*delete[] deck_of_Cards;*/
		/*std::vector<PlayingCard*>deck_of_Cards;

		int size = 52;

		deck_of_Cards.push_back(2);
		deck_of_Cards.push_back(3);*/

		//	std::string *ptr = PlayingCard().CARD_RANK;


			//std::string *ptr = PlayingCard().CARD_RANK;
			//for(int i =0; i <3;i++)
			//{
			//	//std::cout << *(PlayingCard().CARD_RANK + i) << std::endl;
			//	////ptr++;
			//	std::cout << *(PlayingCard().CARD_SUIT + 1);
			//	deck_of_Cards.push_back(*(PlayingCard().CARD_RANK + i));
			//}
			//for (int i = 0; i < 3; i++)
			//{
			//	std::cout << deck_of_Cards[i];
			//}

		for (int i = 1; i <= 13; i++)
		{
			/*	for(int i =0;i<1 ; i++)
				{
					std::cout << *(PlayingCard().CARD_RANK + i) << std::endl;
				}*/

			for (int k = 0; k <= 4; k++)
			{
				//\\
				//std::cout << "\n\n" << *(PlayingCard().CARD_SUIT + i) << std::endl;
				deck_of_Cards.push_back(PlayingCard(PlayingCard().CARD_RANK[i], PlayingCard().CARD_SUIT[k]));


				//deck_of_Cards.push_back(*(PlayingCard().CARD_RANK + i));
		/*		for (int i = 0; i < 13; i++)
				{
					deck_of_Cards.push_back(*(PlayingCard().CARD_RANK + i));
				}*/
			}

		}
	for (std::string i : deck_of_Cards)
	{
		std::cout << i << std::endl;
	}
}

std::vector<PlayingCard*>StandardDeck::GetDeckOfCards() const
{
	return m_deck_of_Cards;
}

int StandardDeck::GetSizeArray()
{
	return SizeArray;
}

void StandardDeck::SetSizeOfArray()
{
	SizeArray = 52;
}


// take the index 0 of the suit array and loop towds each members of the rank array
		//std::cout << *(PlayingCard().CARD_SUIT + i);
		/*deck_of_Cards.push_back(*(PlayingCard().CARD_SUIT + i));*/
		/*for(int a =0; a < PlayingCard().RANKS; a++)
		{*/
		//deck_of_Cards.push_back(*(PlayingCard().CARD_SUIT + i));
		//	/* deck_of_Cards.push_back(*(PlayingCard().CARD_RANK + i));*/
		//for (int a = 0; a < PlayingCard().RANKS; a++)
		//{
		//	/*deck_of_Cards.push_back(*(PlayingCard().CARD_SUIT + i));*/
		//	deck_of_Cards.push_back((PlayingCard().CARD_RANK[i + 1]));
		//	a++;
		//}
		//std::cout << deck_of_Cards[i] << std::endl;
		/*}*/
	//	

	////}
	//	int arr1[] = { 1,2,3,4 };
	//	int arr2[] = { 5,6,7,8,9 };

	//	for (int i = 0; i < 8; i++)
	//	{
	//		std::cout << arr1[i] << std::endl;

	//		for (arr1[i]; i < arr1[i]; arr1[i]++)
	//		{
	//			std::cout << arr2[i] << std::endl;
	//		}
	//	}


		//for (int i = 0; i < 3; i++)
		//{
		//	std::cout << deck_of_Cards[i] << std::endl;
		//}
		//std::string* aptr = &PlayingCard().GetRank();

		//std::cout << &PlayingCard().GetRank();
		//std::cout << *aptr;
		//deck_of_Cards	= PlayingCard().GetSuit();
		//std::cout << "The value of the deck of card is 0" << &deck_of_Cards;