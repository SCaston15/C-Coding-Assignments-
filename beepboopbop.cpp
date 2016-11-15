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
   bool canPutO = false; 
   bool canPutX = false;
   bool gameOver = false; 
   int winner;
   srand(time(0)); 

   cout<<"The user is (X)"<<" "<<"The computer is (O)"<<endl; 
   cout<<endl; 

   //The loop that allows each move to take place and prints the board each time a move is made
   while(!gameOver)
   { 
      int index = 0;
      
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
      while(!canPutX){
         if(choice < 0 || choice > 10){
            cout << "Cannot put an X there.  Try again." << endl;
            cin>>choice;
         }
         if(board[choice] != 'O' && board[choice] != 'X'){
            canPutX = true;
         }else{
            cout << "Cannot put an X there.  Try again." << endl;
            cin>>choice;
         }
      }
      
      board[choice] = 'X';
      canPutX = false;

      //This is where the computer makes a move. 
      randomNumber=rand()%9+1;
      while(!canPutO){
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
      //
      // Horizonal
      // 1,2,3
      // 4,5,6
      // 7,8,9
      //
      // Vertical
      // 1,4,7
      // 2,5,8
      // 3,6,9
      //
      // Diagonals
      // 1,5,9
      // 7,5,3 
      if((board[1]=='X' && board[2]=='X' && board[3]=='X') || (board[4]=='X' && board[5]=='X' && board[6]=='X') || (board[7]=='X' && board[8]=='X' && board[9]=='X') || (board[1]=='X' && board[4]=='X' && board[7]=='X') || (board[2]=='X' && board[5]=='X' && board[8]=='X') || (board[3]=='X' && board[6]=='X' && board[9]=='X') || (board[1]=='X' && board[5]=='X' && board[9]=='X')|| (board[7]=='X' && board[5]=='X' && board[3]=='X')){
         cout<<"The user wins!";
         winner = 1;
         gameOver=true;
      } else if((board[1]=='O' && board[2]=='O' && board[3]=='O') || (board[4]=='O' && board[5]=='O' && board[6]=='O') || (board[7]=='O' && board[8]=='O' && board[9]=='O') || (board[1]=='O' && board[4]=='O' && board[7]=='O') || (board[2]=='O' && board[5]=='O' && board[8]=='O') || (board[3]=='O' && board[6]=='O' && board[9]=='O') || (board[1]=='O' && board[5]=='O' && board[9]=='O')|| (board[7]=='O' && board[5]=='O' && board[3]=='O')){
         cout<<"The computer wins!";
         gameOver=true;
         winner = 0;
      }

      index++; 
      if(index == 10){
         winner = -1;
         gameOver = true;
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
   if(winner == -1){
      cout << "The game is tie.";
   }
   return 0;
}