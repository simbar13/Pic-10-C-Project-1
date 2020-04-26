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
int main() {
	/* --STATEMENTS-- */
	int dealer_negative = 0;
	Player* user = new Player(100);
	Player* dealer = new Player(900);
	bool onwards = true;
	srand(time(0));
	while ((user->money_left() > 0) && (dealer_negative < 900))
	{
		user->myhand()->reset();
		dealer->myhand()->reset();
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
		cout << endl << "Your initial total is: ";
		cout << user->my_hand()->total_value();

		while (add_card == "yes")
		{
			if (user->my_hand()->total_cards() >1)
			{
				cout << "Your hand contains:";
				user->my_hand()->listCards();
				cout << endl << "Your total point value is: ";
				cout << user->my_hand()->total_value();
			}
			if (user->my_hand()->total_value() <= 7.5)
			{
				cout << endl << "Would you like another card? (y/n) ";
				char more;
				cin >> more;
				if (more == 'n')
				{
					add_card = "no";

				}
				//now it is determined that the player would indeed like a new card
				Card* c = new Card();
				user->deal(c);
			}
			else
			{
				cout << endl<<"You busted, the dealer wins!" << endl;
				add_card = "no";
				onwards = false;
				user->alter(player_bet, false);
				dealer->alter(player_bet, true);

			}
			
		}
		if (!onwards)
			continue;
		Card* dfirst = new Card();
		dealer->deal(dfirst);
		cout << "The Dealer's first card is:";
		dealer->my_hand()->listCards();
		cout << endl << "The Dealer's initial total is: ";
		cout << dealer->my_hand()->total_value();
		if (dealer->my_hand()->total_value() < 5.5)
		{
			while (dealer->my_hand()->total_value() < 5.5)
			{
				cout << endl << "The Dealer will draw, press C followed by enter to continue ";
				char hi;
				cin >> hi;
				Card* d = new Card();
				dealer->deal(d);
				cout << "The Dealer's hand contains:";
				dealer->my_hand()->listCards();
				cout << endl << "The Dealer's new total is: ";
				cout << dealer->my_hand()->total_value();

			}
		}
		if (dealer->my_hand()->total_value() > 7.5)
		{
			cout << endl << "The Dealer busted, you win!" << endl;
			user->alter(player_bet, true);
			dealer->alter(player_bet, false);
		}
		else if (dealer->my_hand()->total_value() > user->my_hand()->total_value())
		{
			cout << endl << "The Dealer wins!" << endl;
			user->alter(player_bet, false);
			dealer->alter(player_bet, true);
		}
		else
		{
			cout << endl << "You win!" << endl;
			user->alter(player_bet, true);
			dealer->alter(player_bet, false);
		}
		//here we empty the players hand to prepare for the next round

	}
	if (user->money_left() <= 0)
		cout << endl << endl << "You lost all of your money gambling, seek help!";
	if (dealer->money_left() <= 0)
		cout << endl << endl << "You won all of the casinos money, run, the mob is coming!";

	return 0;
}
