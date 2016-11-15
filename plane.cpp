/*
Program: plane.cpp
Author: Stephanie Caston
Date: 3/7/13
Lab Section: 04 
Purpose: For the user to enter a point on a graph and for the program to
determine if that point is on the origin, x axis, y axis, or which quadrant. 
*/

#include <iostream>

using namespace std; 

int main()
{

float xCoordinate, yCoordinate; 

//This is where the user is prompted to enter the x coordinate and y coordinate  
cout<<"Please enter the x coordinate. "; 
cin>>xCoordinate; 

cout<<"Please enter the y coordinate. ";
cin>>yCoordinate; 

//Here the program reads what numbers are entered and then determines if the point is
//on the origin, the x axis, the y axis, or quatrants I, II, III, or IV
if (xCoordinate==0 && yCoordinate==0)
{
cout<<"The point is on the origin";
}
else
{
if (xCoordinate==0 && (yCoordinate<0 || yCoordinate>0))
{
cout<<"The point is on the y axis";
}
else
{
if ((xCoordinate<0 || xCoordinate>0)&& yCoordinate==0)
{
cout<<"The point is on the x axis"; 
}
else
{
if(xCoordinate>0 && yCoordinate>0)
{
cout<<"The point is in quadrant I";
}
else
{
if(xCoordinate<0 && yCoordinate>0)
{
cout<<"The point is in quadrant II";
}
else
{
if(xCoordinate<0 && yCoordinate<0)
{
cout<<"The point is in quadrant III";
}
else
{
if(xCoordinate>0 && yCoordinate<0)
{
cout<<"The point is in quadrant IV";
}
}
}
}
}
}
}


return 0; 
}