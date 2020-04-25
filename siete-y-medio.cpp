#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main(){
   /* --STATEMENTS-- */
	int dealer_negative = 0;
	Player* user = new Player(100);
	while ((user->money_left() > 0) && (dealer_negative < 900))
	{
		//here is where all the game play happens
		cout << "You Have $";
		cout << user->money_left();
		cout << endl << "Enter your bet:";
		int player_bet;
		cin >> player_bet;
		if (player_bet > user->money_left())
		{
			cout << "You cannot bet more money than you have"<<endl;
			continue;
		}
		string add_card = "yes";
		Card* first = new Card();
		user->deal(first);
		//here we must produce an output similar to the first if statement but with only the first card
		cout << "Your first card is:";
		user->my_hand()->listCards();
		cout << endl << "Your initial total is:";
		cout << user->my_hand()->total_value();

		while (add_card == "yes")
		{
			if (user->my_hand()->total_cards() >1)
			{
				cout << "Your hand contains:";
				user->my_hand()->listCards();
				cout << endl << "Your total point value is:";
				cout << user->my_hand()->total_value();
			}
			//if the total hand value is less than 7.5:
			cout << endl << "Would you like another card? (y/n)";
			char more;
			cin >> more;
			if (more == 'n')
			{
				add_card = "no";
				continue;
			}
			//now it is determined that the player would indeed like a new card
			Card* c = new Card();
			user->deal(c);
			//now if the total hand value is not less than 7.5:
			//cout something like youve reeached 7.5 you dont draw anymore
			
		}

	}
	return 0;
}
