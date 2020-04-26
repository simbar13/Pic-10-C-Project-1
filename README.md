# Pic-10-C-Project-1
## Project 1
## (siete y medio) for Pic 10c-salazar
### Simon Bar-on, UID: 304 902 438

#### This code will play the game Siete y Medio against a computer.  This game is very similar to BlackJack, but is played to a score of 7.5 instead of 21, and with a spanish deck of cards.

Additionally, the program will create a text file called gamelog.txt which contains basic information about each game being played.  

Below are test cases that detail the progress of my code, any bugs or formatting issues are found and mentioned here, and then addressed in the code-containing files.

First test case:
```
You Have $100
Enter your bet:50
Your first card is:
Sota de copas
Your initial total is:0.5
Would you like another card? (y/n)y
Your hand contains:
Sota de copas
As de espadas
Your total point value is:1.5
Would you like another card? (y/n)y
Your hand contains:
Sota de copas
As de espadas
Cinco de copas
Your total point value is:6.5
Would you like another card? (y/n)n
The Dealer's first card is:
Caballo de espadas
The Dealer's initial total is:0.5
The Dealer will draw, press C followed by enter to continuec
The Dealer's hand contains:
Caballo de espadas
Cinco de espadas
The Dealer's new total is:5.5
You win!
You Have $150
Enter your bet:150
Your first card is:
Seis de copas
Your initial total is:6
Would you like another card? (y/n)n
The Dealer's first card is:
Sota de copas
The Dealer's initial total is:0.5
The Dealer will draw, press C followed by enter to continuec
The Dealer's hand contains:
Sota de copas
Dos de copas
The Dealer's new total is:2.5
The Dealer will draw, press C followed by enter to continuec
The Dealer's hand contains:
Sota de copas
Dos de copas
Tres de bastos
The Dealer's new total is:5.5
You win!
You Have $300
Enter your bet:300
Your first card is:
Siete de bastos
Your initial total is:7
Would you like another card? (y/n)y
Your hand contains:
Siete de bastos
Cinco de bastos
Your total point value is:12
You busted, the dealer wins!
```

You lost all of your money gambling, seek help!

This appeared to work correctly, however everytime the code was run, the same cards were always dealt in the same order.  To fix this bug, I seeded the pseudo random generator each runthrough of the main routine.


Second Test Case:
```
You Have $100
Enter your bet:100
Your first card is:
As de copas
Your initial total is:1
Would you like another card? (y/n)y
Your hand contains:
As de copas
Dos de copas
Your total point value is:3
Would you like another card? (y/n)y
Your hand contains:
As de copas
Dos de copas
Siete de bastos
Your total point value is:10
You busted, the dealer wins!
```
This appears to work as it is supposed to, but the output is large and some of the lines are not well formatted. 

Third Test Case:
```
You Have $100
Enter your bet:150
You cannot bet more money than you have
You Have $100
Enter your bet:50
Your first card is:  Sota de espadas
Your initial total is: 0.5
Would you like another card? (y/n) y
Your hand contains:  Sota de espadas  Cinco de copas
Your total point value is: 5.5
Would you like another card? (y/n) y
Your hand contains:  Sota de espadas  Cinco de copas  Siete de oros
Your total point value is: 12.5
You busted, the dealer wins!
You Have $50
Enter your bet:50
Your first card is:  Sota de espadas  Cinco de copas  Siete de oros  As de copas
Your initial total is: 13.5Your hand contains:  Sota de espadas  Cinco de copas  Siete de oros  As de copas
Your total point value is: 13.5
You busted, the dealer wins!
```
The formatting issues have been adressed, but there is now a bug that results after the player busts but still has money left, in this case the hand is not resetting

Test Case 4: (incomplete due to bug)
```
You Have $100
Enter your bet:50
Your first card is:  Tres de copas
Your initial total is: 3
Would you like another card? (y/n) y
Your hand contains:  Tres de copas  Tres de espadas
Your total point value is: 6
Would you like another card? (y/n) y
Your hand contains:  Tres de copas  Tres de espadas  Dos de oros
Your total point value is: 8
You busted, the dealer wins!
You Have $50
Enter your bet:50
Your first card is:  Sota de oros
Your initial total is: 0.5
Would you like another card? (y/n) y
Your hand contains:  Sota de oros  Dos de bastos
Your total point value is: 2.5
Would you like another card? (y/n) n
You Have $50
Enter your bet:
```
The previous bug was fixed by moving two reset functions, but now a bug appears that terminates the round when the player does not ask for a new card.

Test Case 4:
```
You Have $100
Enter your bet:50
Your first card is:  Cuatro de copas
Your initial total is: 4
Would you like another card? (y/n) n
The Dealer's first card is:  As de bastos
The Dealer's initial total is: 1
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  As de bastos  Dos de espadas
The Dealer's new total is: 3
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  As de bastos  Dos de espadas  Tres de bastos
The Dealer's new total is: 6
You win!
You Have $150
Enter your bet:
```
The hand no longer terminates, but somewhere a comparison was written incorrectly as the dealer won this hand but the program says the player did

Test Case 5:
```
You Have $100
Enter your bet:50
Your first card is:  Tres de bastos
Your initial total is: 3
Would you like another card? (y/n) n
The Dealer's first card is:  Tres de oros
The Dealer's initial total is: 3
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  Tres de oros  Caballo de espadas
The Dealer's new total is: 3.5
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  Tres de oros  Caballo de espadas  As de espadas
The Dealer's new total is: 4.5
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  Tres de oros  Caballo de espadas  As de espadas  As de copas
The Dealer's new total is: 5.5
The Dealer wins!
You Have $50
Enter your bet:50
Your first card is:  Caballo de copas
Your initial total is: 0.5
Would you like another card? (y/n) y
Your hand contains:  Caballo de copas  Rey de oros
Your total point value is: 1
Would you like another card? (y/n) y
Your hand contains:  Caballo de copas  Rey de oros  Sota de bastos
Your total point value is: 1.5
Would you like another card? (y/n) y
Your hand contains:  Caballo de copas  Rey de oros  Sota de bastos  Seis de espadas
Your total point value is: 7.5
Would you like another card? (y/n) n
The Dealer's first card is:  Tres de copas
The Dealer's initial total is: 3
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  Tres de copas  Rey de oros
The Dealer's new total is: 3.5
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  Tres de copas  Rey de oros  Dos de copas
The Dealer's new total is: 5.5
You win!
You Have $100
Enter your bet:100
Your first card is:  Cinco de oros
Your initial total is: 5
Would you like another card? (y/n) n
The Dealer's first card is:  Rey de oros
The Dealer's initial total is: 0.5
The Dealer will draw, press C followed by enter to continue c
The Dealer's hand contains:  Rey de oros  Cinco de oros
The Dealer's new total is: 5.5
The Dealer wins!


You lost all of your money gambling, seek help!
```
Everything appears to work smoothly, will run a couple more test cases and update if more problems arise

