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

	}
	return 0;
}
