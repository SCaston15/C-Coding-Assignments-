#include <iostream>

#include <math.h> 

using namespace std;

int main ()
{ 

float length, width, area, perimeter, lengthOfDiagonal; 

cout<<"What is the legnth? ";
cin>>length;

cout<<"What is the width? "; 
cin>>width; 

area=length*width; 
perimeter=(length*2)+(width*2); 
lengthOfDiagonal= (length*length)+(width*width); 
lengthOfDiagonal=sqrt(lengthOfDiagonal);

cout<<"area "<<area<<endl
<<"perimeter "<<perimeter<<endl
<<"length of diagonal "<<lengthOfDiagonal<<endl; 

return 0; 
} 