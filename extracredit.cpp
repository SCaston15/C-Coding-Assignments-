/*
Name: Stephanie Caston
Date: 5/1/2013
Lab Section: 04
Program: extracredit.cpp
Purpose: To practice creating functions. 
*/
#include <iostream>

using namespace std; 

double absoluteValue()
{
double number;

//this is where the user is prompted to enter a value. 
cout<<"Enter a number and I will give you the absolute value of that number. "<<endl; 
cin>>number;

//This is where the value will either stay positive or be changed to positive. 
if(number<0)
{
number=number*-1;
}
else
{
number=number;
}
cout<<number; 
}

double maxOfThree()
{
double valueOne;
double valueTwo;
double valueThree; 

//Here the user is prompted to enter 3 separate values. 
cout<<"Enter value one: ";
cin>>valueOne;

cout<<"Enter value two: ";
cin>>valueTwo; 

cout<<"Enter value three: ";
cin>>valueThree;

//This is where it is determined which of those values entered is the highest value. 
if(valueOne<valueTwo && valueTwo<valueThree)
{
cout<<valueThree<<" is the maximum number you entered.";
}
if(valueOne<valueThree && valueThree<valueTwo)
{
cout<<valueTwo<<" is the maximum number you entered. ";
}
if(valueTwo<valueThree && valueThree<valueOne)
{
cout<<valueOne<<" is the maximum number you entered. ";
}
if(valueThree<valueTwo && valueTwo<valueOne)
{
cout<<valueOne<<" is the maximum number you entered. ";
}
if(valueTwo<valueOne && valueOne<valueThree)
{
cout<<valueThree<<" is the maximum number you entered. "; 
}
if(valueThree<valueOne && valueOne<valueTwo)
{
cout<<valueTwo<<" is the maxiumum number you entered. "; 
}
}

char giveMeUppercase()
{
char character;
char letter[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',
't','u','v','w','x','y','z'}; 
char upperCase[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R',
'S','T','U','V','W','X','Y','Z'};
bool found=false;

//The user is prompted to enter any character. 
cout<<"Enter a character, if the character is a lowercase letter I will make it uppercase."<<endl
<<"If the character is not a letter or is an uppercase letter, it will stay the same."<<endl; 
cin>>character; 

//This is the loop that determines if the charcter is lowercase or not. 
//If a lowercase letter is found the uppercase version of that letter is outputted. 
for(int i=0; i<26 &&!found; i++)
{
if(character==letter[i])
{
found=true;
}
if(found)
{
cout<<"The uppercase version of that letter is: "<<upperCase[i]<<endl;
}
}
//If a lowercase letter is not found then the character the user inputted will be reprinted. 
if(found==false)
{
cout<<character<<endl;
}
}

char isALetter()
{
//Here an array holds every lowercase and uppercase letter 
char letters[62]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
'p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H',
'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
bool character=false; 
char characterChoice;

//The user is prompted to enter a character of some kind. 
cout<<"Enter a character, if the character is a letter I will return true."<<endl
<<"If the character is not a letter I will return false."<<endl; 
cin>>characterChoice; 

//This is the loop that determines if the character is a letter or not.
for(int i=0; i<62 && !character; i++)
{
//If the character matches a character in the array, the word TRUE is outputted.
if(characterChoice==letters[i])
{
character=true; 
cout<<"TRUE"<<endl; 
}
}
//If the character inputted was not found in the array, the word FALSE is outputted. 
if(character==false)
{
cout<<"FALSE"<<endl;
}
}

int printPyramid()
{
//Here is where the integers for each loop are declared. 
int integer,i,j,k; 

//Here the user is prompted to enter how many rows they want the pyramid to be. 
cout<<"Enter an integer and I will print a pyramid with that many rows."<<endl; 
cin>>integer; 

//Here is where the pyramid made of asterisks is generated. 
for(i=1; i<=integer; i++)
{
for(j=1;j<=integer; ++j)
{
cout<<(" ");
}
while(k!=2*i==1)
{
cout<<"*";
++k;
}
k=0; 
cout<<endl;
}
}
int main()
{

printPyramid();
printPyramid();
printPyramid();
return 0;
}


