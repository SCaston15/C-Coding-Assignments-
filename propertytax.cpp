#include<iostream>

using namespace std; 

int main ()
{
float propertyValue, taxValue, taxRatePer100, propertyTaxDue; 

cout<<"What is the value of your property? ";
cin>>propertyValue;

taxRatePer100=1.05;   

taxValue=(propertyValue*.92);

propertyTaxDue=(taxValue/100)*taxRatePer100;
 
cout<<"Tax value: "<<taxValue<<endl;
 
cout<<"Tax rate per $100: "<<taxRatePer100<<endl;
 
cout<<"Property tax due: "<<propertyTaxDue<<endl;

return 0;
}