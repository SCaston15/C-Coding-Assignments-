#include<iostream>

using namespace std; 

int main ()
{ 
char QRW; 
int yardsPassed;
int yardsRushed;
int yardsReceived;
int touchdowns; 
int powerRanking; 

cout<<"What is the position of the player? ";
cin>>QRW; 

cout<<"What was the amount of yards passed? ";
cin>>yardsPassed;

cout<<"What was the amount of yards rushed? ";
cin>>yardsRushed; 

cout<<"What was the amount of reieving yards? ";
cin>>yardsReceived;
 
cout<<"What was the amount of touchdowns? ";
cin>>touchdowns; 

yardsPassed=(yardsPassed/30);
touchdowns=touchdowns*6; 
 
powerRanking=(yardsPassed)+((yardsRushed+yardsReceived)/10)+(touchdowns);

cout<<yardsPassed<<endl;
cout<<((yardsRushed+yardsReceived)/10)<<endl;
cout<<touchdowns<<endl;
cout<<"The NFL player's total power ranking is: "<<powerRanking<<endl;
return 0; 

}
