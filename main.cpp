#include <iostream>
using namespace std;
int main() {//mains starts
  bool game = true;
  char space1 = ' ';
  char space2 = ' ';
  char space3 = ' ';
  char space4 = ' ';
  char space5 = ' ';
  char space6 = ' ';
  char space7 = ' ';
  char space8 = ' ';
  char space9 = ' ';
  int choice;
  int turn = 0;


  while(true == game) { // game start 

    //Displaying board
    
    cout << "           |     |     \n";
    cout << "        " <<space1<< "  |  " << space2 << "  |  " << space3<< "  \n";
    cout << "      _____|_____|_____\n";
    cout << "           |     |     \n";
    cout << "        " <<space4<< "  |  " << space5 << "  |  " << space6<< "  \n";
    cout << "      _____|_____|_____\n";
    cout << "           |     |     \n";
    cout << "        " <<space7<< "  |  " << space8 << "  |  " << space9<< "  \n";
    cout << "           |     |     \n";


    //Game logic

    //Player 1 Turn 
    
    cout << "It is Player 1 turn! Please enter a number to correspond with the space you would like to fill\n";
    cin >> choice;//takes user input and stores it in choice 
    turn++;//turn variable increases by one
    if(turn == 9){//if turn variable ever hits 9, game is ended 
      cout << "It is a tie\n";
      break;
    }
    if(1 == choice){
      space1 = 'X';
    }
    else if (2 == choice){
      space2 = 'X';
    }
    else if (3 == choice){
      space3 = 'X';
    }
    else if (4 == choice){
      space4 = 'X';
    }
    else if (5 == choice){
      space5 = 'X';
    }
    else if (6 == choice){
      space6 = 'X';
    }
    else if (7 == choice){
      space7 = 'X';
    }
    else if (8 == choice){
      space8 = 'X';
    }
    else if (9 == choice){
      space9 = 'X';
    }
    else {
      cout << "Game ending\n"; 
      break;
    }
    //Updated display board

    cout << "           |     |     \n";
    cout << "        " <<space1<< "  |  " << space2 << "  |  " << space3<< "  \n";
    cout << "      _____|_____|_____\n";
    cout << "           |     |     \n";
    cout << "        " <<space4<< "  |  " << space5 << "  |  " << space6<< "  \n";
    cout << "      _____|_____|_____\n";
    cout << "           |     |     \n";
    cout << "        " <<space7<< "  |  " << space8 << "  |  " << space9<< "  \n";
    cout << "           |     |     \n";
    
    //Player 1 Turn End

    //Ways Player 1 can win
     
    if ((space1 == 'X' && space2 == 'X' && space3 == 'X')||(space4 == 'X' && space5 == 'X' && space6 == 'X')||(space7 == 'X' && space8 == 'X' && space9 == 'X')||(space1 == 'X' && space4 == 'X' && space7 == 'X')||(space2 == 'X' && space5 == 'X' && space8 == 'X')||(space3 == 'X' && space6 == 'X' && space9 == 'X')||(space7 == 'X' && space5 == 'X' && space3 == 'X')||(space1 == 'X' && space5 == 'X' && space9 == 'X')) {
      cout << "Player 1 wins!\n";
      break;
    }

    //Player 2 start 
    cout << "It is Player 2 turn! Please enter a number to correspond with the space you would like to fill\n";
    cin >> choice;
    turn++;
    if(turn == 9){
      cout << "It is a tie\n";
      break;
    }
    if(1 == choice){
      space1 = 'O';
    }
    else if (2 == choice){
      space2 = 'O';
    }
    else if (3 == choice){
      space3 = 'O';
    }
    else if (4 == choice){
      space4 = 'O';
    }
    else if (5 == choice){
      space5 = 'O';
    }
    else if (6 == choice){
      space6 = 'O';
    }
    else if (7 == choice){
      space7 = 'O';
    }
    else if (8 == choice){
      space8 = 'O';
    }
    else if (9 == choice){
      space9 = 'O';
    }
    else {
      cout << "Game ending\n"; 
      break;
    }

    //Ways Player 2 can win 

    if ((space1 == 'O' && space2 == 'O' && space3 == 'O')||(space4 == 'O' && space5 == 'O' && space6 == 'O')||(space7 == 'O' && space8 == 'O' && space9 == 'O')||(space1 == 'O' && space4 == 'O' && space7 == 'O')||(space2 == 'O' && space5 == 'O' && space8 == 'O')||(space3 == 'O' && space6 == 'O' && space9 == 'O')||(space7 == 'O' && space5 == 'O' && space3 == 'O')||(space1 == 'O' && space5 == 'O' && space9 == 'O')) {
      cout << "Player 2 wins!\n";
      break;
    }
  }//while loop stops/restarts
} //main ends
