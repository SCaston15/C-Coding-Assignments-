#include<iostream>

using namespace std; 

int main ()
{
float class1;
float class2;
float class3;
float class4;
float GPA; 

cout<<"What was your grade value for class 1? "; 
cin>>class1; 

cout<<"What was your grade value for class 2? ";
cin>>class2;

cout<<"What was your grade value for class 3? ";
cin>>class3; 

cout<<"What was your grade value for class 4? ";
cin>>class4; 

GPA=(class1+class2+class3+class4)/4; 

cout<<"Your GPA is "<<GPA;

if(GPA>3)
{
cout<< "Congratulations!!! "<<endl;
}
return 0; 
}
