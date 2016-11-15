/* 
Program: Carrental.cpp
Author: Stephanie Caston
Date: 3/7/2013 
Lab Section: 04 
Purpose: For the user to enter the total miles driven and the type of car 
driven, then for the program to output the total amount of revenue owed. 
*/

#include <iostream>

using namespace std; 

int main()
{ 

float cost; 
int type, miles; 

//This is where the user is prompted to enter the number of miles driven
//as well as the type of car they chose to drive. 

cout<<"Miles Driven: ";
cin>>miles; 

cout<<"Pick the car that you drove from the menu below."<<endl;
cout<<"1. Sub-Compact"<<endl;
cout<<"2. Sedan"<<endl;
cout<<"3. SUV"<<endl;
cout<<"4. Van"<<endl; 
cin>>type; 

//This is where the program determines how much to charge the user 
//depending on the total miles driven and the car type chosen. 
switch (type)  

{
   case 1: if(type==1) 
           {
           cost=.25*miles;
           }
           if(miles>100&& miles<=300)
           {
           cost=(cost)+((miles-100)*.25*.1);
           }
           if (miles>300)
           {
           cost=(cost)+(200*.25*.1)+((miles-300)*.25*.15);
           }
           break; 
  
   case 2: if(type==2)
           {
           cost=.50*miles;
           }
           if(miles>100 && miles<=300)
           {
           cost=(cost)+((miles-100)*.5*.1);
           }
           if (miles>300)
           {
           cost=(cost)+(200*.5*.1)+((miles-300)*.5*.15);
           }
           break;
   
   case 3: if(type==3)
           {
           cost=miles*.8;
           }
           if (miles>100 && miles<=300)
           {
           cost=(cost)+((miles-100)*.8*.1);
           }
           if(miles>300)
           {
           cost=(cost)+(200*.8*.1)+((miles-300)*.8*.15);         
           }
           
           break; 
         
   case 4: if(type==4)
           {
           cost=1*miles;
           }
           if(miles>100 && miles<=300)
           {
           cost=(cost)+((miles-100)*1*.1);
           }
           if (miles>300)
           {
           cost=(cost)+(200*.1)+((miles-300)*.15);
           }
           break;
}
//This will produce the final output of the program that will
//provide the user with the total cost

cout<<"Your Car Choice: "<<type<<endl; 
cout<<"Total Price Owed: $"<<cost<<endl; 
return 0;
}