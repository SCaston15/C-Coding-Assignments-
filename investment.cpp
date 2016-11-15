/* 
Name: Stephanie Caston
Date: 4/17/2013
Lab Section: 04
Program Name: Investment.cpp
Purpose: For the user to enter their initial investment and then to see how much money he or she
would have in his or her sixtieth birthday, then to see how much income they would have access to
every year and every month following the discovery of the money.
*/
#include <iostream>
using namespace std; 

int main ()
{ 

float initialAmount,interest,total,years,moneyPerMonth; 

//This is where the user is prompted to enter their initial investment, rate of interest
//and their current age. 
cout<<"What is the amount of money you invested? ";
cin>>initialAmount; 

cout<<"What is the rate of interest per year? Use a whole number not a decimal. "; 
cin>>interest; 

cout<<"How old are you? "; 
cin>>years; 

total=initialAmount;

//This is where the interest is compounded yearly. 
for (int i=0; i<(years-16); i++)
{
total=total*(interest/100)+total; 
}
//Here is where the amount of money available per year and per month to the user from the 
//interest is determined. 
interest=total*interest/100;
moneyPerMonth=interest/12;

//This is where the final output is generated, showing the initial amount invested
//the total amount of years the money has been compounded, and total value of the
//investment, and the total money per year and month from the interest. 
cout<<"Initial investment amount: $"<<initialAmount<<endl;
cout<<"Number of years invested: "<<years-16<<endl;
cout<<"Total value of the investment: $"<<total<<endl;
cout<<"The total money per year from interest: $"<<interest<<endl;
cout<<"The total money per month from interest: $"<<moneyPerMonth<<endl; 

return 0; 
}