# Pic-10-C-Project-1
## Project 1
## (siete y medio) for Pic 10c-salazar
### Simon Bar-on, UID: 304 902 438

#### This code will play the game Siete y Medio against a computer.  This game is very similar to BlackJack, but is played to a score of 7.5 instead of 21, and with a spanish deck of cards.

Additionally, the program will create a text file called gamelog.txt which contains basic information about each game being played.  
```
First test case:
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

```
Second Test Case:
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
