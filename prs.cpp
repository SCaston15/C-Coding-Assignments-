/* 
Program: prs.cpp
Author: Stephanie Caston
Date: 3/7/2013
Lab Section: 04
Purpose: For the program to be able to play one game of rock, paper, scissors
with the user. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main()
{ 

//Here is where the variable is created to hold the random number.
int randomNumber; 
srand(time(0));
int index; 
char choice; 


//Here the user is prompted to choose rock, paper, or scissors. 
cout<<"Please enter r for rock, s for scissor, or p for paper."<<endl; 
cin>>choice; 

//There are three possible choices for the computer to make so random number
//has to be modulated by 3 so there there is an anwer of 0, 1, or 2. 
randomNumber=rand()%3; 

//This is when the program chooses rock, paper, or scissors depending on the random
//number generated 
if (randomNumber==0)
{
cout<<"The computer chose rock."<<endl; 
}
else
{
if (randomNumber==1)
{
cout<<"The computer chose scissors."<<endl;;
}
else
{
if (randomNumber==2)
{
cout<<"The computer chose paper."<<endl; 
}
}
}

//This is where the program decides based on the user's choice and the computer's 
//choice, if it is a tie, a win, or a loss. 
if (choice=='r' && randomNumber==0)
{
cout<<"It is a tie.";
}
else
{
if (choice=='r' &&randomNumber==1)
{
cout<<"You win!";
}
else
{
if (choice=='r' && randomNumber==2)
{
cout<<"You lose!";
}
}
}
if (choice=='s' && randomNumber==1)
{
cout<<"It is a tie.";
}
else
{
if (choice=='s' &&randomNumber==2)
{
cout<<"You win!";
}
else
{
if (choice=='s' && randomNumber==0)
{
cout<<"You lose!";
}
}
}
if (choice=='p' && randomNumber==2)
{
cout<<"It is a tie.";
}
else
{
if (choice=='p' &&randomNumber==0)
{
cout<<"You win!";
}
else
{
if (choice=='p' && randomNumber==1)
{
cout<<"You lose!";
}
}
}



return 0;
}