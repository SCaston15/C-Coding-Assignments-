/* 
Name: Stephanie Caston
Date: 4/6/2013
Lab Section: 04
Program Name: DivisibleByNine
Purpose: For the user to input an integer and for the computer to determine if that 
integer is divisible by nine by adding the digits of the integer together and checking
if they add up to nine. 
*/


#include <iostream>
using namespace std; 

int main ()
{

int integer; 
//Here the user is prompted to enter an integer. 
cout<<"Enter an integer and I will tell you if it is divisible by nine."<<endl; 
cin>>integer; 
//This is the part of the program that will output the integer the user entered. 
cout<<"the integer you entered is: "<<integer<<endl; 

//In this part of the program the digits of the integer are added together and checked
//to see if they add up to nine, and then the message of whether the # is divisible by
// nine or not is determined. 
if (((integer/10)+(integer%10))%9==0) 
{
cout<<"The integer is divisible by nine."; 
}
else
{
cout<<"The integer is not divisible by nine."; 
} 

return 0;
}