/* 
Name: Stephanie Caston
Date: 4/27/2013
Lab Section: 04 
Program: Cards.cpp
Purpose: To generate a random deck of cards. Then to draw 5 cards randomly from 
the shuffled deck, then to determine the total value of those 5 cards after said 
values have been assigned to each card in the deck. 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main ()
{

int randomNumber; 
srand(time(0));
int index;  

//This is the array where each card in the deck is is named 
string deckOfCards[52]={"2 of Hearts","3 of Hearts", "4 of Hearts", "5 of Hearts", "6 of Hearts", "7 of Hearts",
"8 of Hearts", "9 of Hearts", "10 of Hearts", "Jack of Hearts", "Queen of Hearts", "King of Hearts", "Ace of Hearts",
"2 of Spades", "3 of Spades", "4 of Spades", "5 of Spades", "6 of Spades", "7 of Spades", 
"8 of Spades", "9 of Spades", "10 of Spades", "Jack of Spades", "Queen of Spades", "King of Spades", "Ace of Spades", 
"2 of Clubs", "3 of Clubs", "4 of Clubs", "5 of Clubs", "6 of Clubs", "7 of Clubs", "8 of Clubs", 
"9 of Clubs", "10 of Clubs", "Jack of Clubs", "Queen of Clubs", "King of Clubs", "Ace of Clubs", 
"2 of Diamonds", "3 of Diamonds", "4 of Diamonds", "5 of Diamonds", "6 of Diamonds", "7 of Diamonds", "8 of Diamonds",
"9 of Diamonds", "10 of Diamonds", "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds", "Ace of Diamonds"};

//This is the parallel array that assigns a value  to each card in the deck
int valuesOfCards[52]={2, 3, 4, 5, 6, 7, 8, 8, 10, 10, 10, 10, 11, 
2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 
10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11}; 

int countCards=0; 

//Here is where the deck of cards is shuffled and displayed. 
for(int i=0; i<52; i++)
{
randomNumber=rand()%52; 
cout<<deckOfCards[randomNumber]<<endl;
}
cout<<endl;
cout<<"The five cards you drew were: "<<endl; 

//Here is where 5 random cards are chosen from the deck and the user
//is informed what the value of each card drawn is
for(int i=0; i<5; i++)
{
randomNumber=rand()%52;
cout<<deckOfCards[randomNumber]<<" "<<"with a value of"<<" "<<valuesOfCards[randomNumber]<<endl;

//This is where the assigned values of each cared are added up 
countCards+=valuesOfCards[randomNumber];
}
cout<<endl;

//Here the total value of the 5 cards drawn is displayed
cout<<"The total value of the cards you drew is: "<<countCards<<endl; 


return 0; 
}
