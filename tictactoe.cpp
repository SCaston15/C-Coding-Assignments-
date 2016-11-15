/*
Name: Stephanie Caston
Date: 5/1/2013
Lab Section: 04
Program: tictactoe.cpp
Purpose: To create a tic tac toe game that has the user play against the computer. 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main ()
{

char board[10]={'0','1','2','3','4','5','6','7','8','9'};
char choice;
int randomNumber;
char turn; 
bool canPutO=false; 
bool gameOver=false; 
srand(time(0)); 

//Tells you who is X and who is O
cout<<"The user is (X)"<<" "<<"The computer is (O)"<<endl; 
cout<<endl; 

//The loop that allows each move to take place and prints the board each time a move is made
for(int i=0; i<10 && !gameOver; i++)
{ 
//Here is where the board is generated.
cout<<board[1]<<"       "<<board[2]<<"       "<<board[3]<<endl; 
cout<<endl;                               
cout<<endl; 
cout<<board[4]<<"       "<<board[5]<<"       "<<board[6]<<endl; 
cout<<endl;
cout<<endl;
cout<<board[7]<<"       "<<board[8]<<"       "<<board[9]<<endl;  
cout<<endl;
cout<<endl; 

//Prompts the user to enter where they want X to go. 
cout<<"Enter the number where you want X to be"<<endl;
cin>>choice; 

//This is where it is determined where the X is to be printed on the board after the user
//has entered the number he/she wishes it to be. 
if(choice==board[1])
{
board[1]='X';
}
if(choice==board[2])
{
board[2]='X';
}
if(choice==board[3])
{
board[3]='X';
}
if(choice==board[4])
{
board[4]='X';
}
if(choice==board[5])
{
board[5]='X';
}
if(choice==board[6])
{
board[6]='X';
}
if(choice==board[7])
{
board[7]='X';
}
if(choice==board[8])
{
board[8]='X';
}
if(choice==board[9])
{
board[9]='X';
}

//This is where the computer makes a move. 
      randomNumber=rand()%9+1;
      while(!canPutO)
         {
         if(board[randomNumber]!='X' && board[randomNumber]!='O'){
            canPutO=true;
         } else {
            randomNumber = rand()%9+1;
         }
      }
      
      board[randomNumber] = 'O';
      canPutO = false;



//Here is where it is determined when the game has been won by either the user
//or the computer. 
if(board[1]=='X' && board[2]=='X' && board[3]=='X')
{
cout<<"The user wins!";
gameOver=true;
} 
if(board[4]=='X' && board[5]=='X' && board[6]=='X')
{
cout<<"The user wins!";
gameOver=true;
}
if(board[7]=='X' && board[8]=='X' && board[9]=='X')
{
cout<<"The user wins!";
gameOver=true; 
}
if(board[1]=='X' && board[4]=='X' && board[7]=='X')
{
cout<<"The user wins!";
gameOver=true; 
}
if(board[2]=='X' && board[5]=='X' && board[6]=='X')
{
cout<<"The user wins!";
gameOver=true;
}
if(board[3]=='X' && board[6]=='X' && board[9]=='X')
{
cout<<"The user wins!";
gameOver=true; 
}
if(board[1]=='X' && board[5]=='X' && board[9]=='X')
{
cout<<"The user wins!";
gameOver=true; 
}
if(board[7]=='X' && board[5]=='X' && board[3]=='X')
{
cout<<"The user wins!";
gameOver=true; 
}

if(board[1]=='O' && board[2]=='O' && board[3]=='O')
{
cout<<"The computer wins!"<<endl;
gameOver=true;
}
if(board[4]=='O' && board[5]=='O' && board[6]=='O')
{
cout<<"The computer wins!"<<endl;
gameOver=true; 
}
if(board[7]=='O' && board[8]=='O' && board[9]=='O')
{
cout<<"The computer wins!"<<endl;
gameOver=true; 
}
if(board[1]=='O' && board[4]=='O' and board[7]=='O')
{
cout<<"The computer wins!"<<endl;
gameOver=true; 
}
if(board[2]=='O' && board[5]=='O' && board[8]=='O')
{
cout<<"The computer wins!"<<endl;
gameOver=true; 
}
if(board[3]=='O' && board[6]=='O' && board[9]=='O')
{
cout<<"The computer wins!"<<endl;
gameOver=true; 
}
if(board[1]=='O' && board[5]=='O' && board[9]=='O')
{
cout<<"The computer wins!"<<endl;
gameOver=true; 
}
if(board[7]=='O' && board[5]=='O' && board[3]=='O')
{
cout<<"The computer wins!";
gameOver=true;
}
}
//Here the board is printed one last time. 
cout<<endl;
cout<<board[1]<<"       "<<board[2]<<"       "<<board[3]<<endl; 
cout<<endl;                               
cout<<endl; 
cout<<board[4]<<"       "<<board[5]<<"       "<<board[6]<<endl; 
cout<<endl;
cout<<endl;
cout<<board[7]<<"       "<<board[8]<<"       "<<board[9]<<endl;  
cout<<endl;
cout<<endl;

//This is where it is determined if the game was a draw or not. 
if(gameOver==false)
{
cout<<"It is a draw."<<endl;  
}  

return 0; 
}

