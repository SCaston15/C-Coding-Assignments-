#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main ()
{

char board[10]={'0','1','2','3','4','5','6','7','8','9'};
char choice;
int randomNumber;
char choiceTwo; 
bool canPutO=false;
bool gameOver=false; 
srand(time(0)); 

cout<<"Player 1 is (X)"<<" "<<"Player 2 is (O)"<<endl; 
cout<<endl; 


for(int i=0; i<10 && !gameOver; i++)
{ 
cout<<board[1]<<"       "<<board[2]<<"       "<<board[3]<<endl; 
cout<<endl;                               
cout<<endl; 
cout<<board[4]<<"       "<<board[5]<<"       "<<board[6]<<endl; 
cout<<endl;
cout<<endl;
cout<<board[7]<<"       "<<board[8]<<"       "<<board[9]<<endl;  
cout<<endl;
cout<<endl; 

cout<<"Player 1 enter where you want X to be "<<endl;
cin>>choice; 

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

cout<<"Player two enter where you want O to be"<<endl;
cin>>choiceTwo; 

if(choiceTwo==board[1] && board[1]!='X')
{
board[1]='O';
}
if(choiceTwo==board[2] && board[2]!='X')
{
board[2]='O';
}
if(choiceTwo==board[3])
{
board[3]='O';
}
if(choiceTwo==board[4] && board[4]!='X')
{
board[4]='O';
}
if(choiceTwo==board[5] && board[5]!='X')
{
board[5]='O';
}
if(choiceTwo==board[6] && board[6]!='X')
{
board[6]='O';
}
if(choiceTwo==board[7] && board[7]!='X')
{
board[7]='O';
}
if(choiceTwo==board[8] && board[8]!='X')
{
board[8]='O';
}
if(choiceTwo==board[9] && board[9]!='X')
{
board[9]='O';
}

if(board[1]=='X' && board[2]=='X' && board[3]=='X')
{
cout<<"Player 1 wins!";
gameOver=true;
} 
if(board[4]=='X' && board[5]=='X' && board[6]=='X')
{
cout<<"Player 1 wins!";
gameOver=true;
}
if(board[7]=='X' && board[8]=='X' && board[9]=='X')
{
cout<<"Player 1 wins!";
gameOver=true; 
}
if(board[1]=='X' && board[4]=='X' && board[7]=='X')
{
cout<<"Player 1 wins!";
gameOver=true; 
}
if(board[2]=='X' && board[5]=='X' && board[6]=='X')
{
cout<<"Player 1 wins!";
gameOver=true;
}
if(board[3]=='X' && board[6]=='X' && board[9]=='X')
{
cout<<"Player 1 wins!";
gameOver=true; 
}
if(board[1]=='X' && board[5]=='X' && board[9]=='X')
{
cout<<"Player 1 wins!";
gameOver=true; 
}
if(board[7]=='X' && board[5]=='X' && board[3]=='X')
{
cout<<"Player 1 wins!";
gameOver=true; 
}


if(board[1]=='O' && board[2]=='O' && board[3]=='O')
{
cout<<"Player two wins!"<<endl;
gameOver=true;
}
if(board[4]=='O' && board[5]=='O' && board[6]=='O')
{
cout<<"Player two wins!"<<endl;
gameOver=true; 
}
if(board[7]=='O' && board[8]=='O' && board[9]=='O')
{
cout<<"Player two wins!"<<endl;
gameOver=true; 
}
if(board[1]=='O' && board[4]=='O' and board[7]=='O')
{
cout<<"Player two wins!"<<endl;
gameOver=true; 
}
if(board[2]=='O' && board[5]=='O' && board[8]=='O')
{
cout<<"Player two wins!"<<endl;
gameOver=true; 
}
if(board[3]=='O' && board[6]=='O' && board[9]=='O')
{
cout<<"Player two wins!"<<endl;
gameOver=true; 
}
if(board[1]=='O' && board[5]=='O' && board[9]=='O')
{
cout<<"Player two wins!"<<endl;
gameOver=true; 
}
if(board[7]=='O' && board[5]=='O' && board[3]=='O')
{
cout<<"Player two wins!";
gameOver=true;
}
}

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

if(gameOver==false)
{
cout<<"It is a draw."<<endl;  
}  

return 0; 
}
