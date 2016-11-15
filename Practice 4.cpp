#include <iostream>

using namespace std;

int main ()
{

float gallons, fuelEfficiency, pricePerGallon, costPer100Miles, distance; 

cout<<"How many gallons? "; 
cin>>gallons; 

cout<<"What is the fuel efficiency? "; 
cin>>fuelEfficiency; 

cout<<"What is the price per gallon? "; 
cin>>pricePerGallon; 


costPer100Miles=(100/fuelEfficiency*pricePerGallon); 
distance=(gallons*fuelEfficiency);

cout<<"Cost per 100 miles is: "<<costPer100Miles<<endl
<<"Distance ability is: "<<distance<<endl;

return 0; 
} 