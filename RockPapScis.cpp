// This simple rock paper scissors game is meant to be run on a Linux terminal, but can easily be converted to windows if necessary.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  // initialize a random computer choice
  srand (time(NULL));
  int comp = rand() % 3 + 1;
  int user;
  int userscore = 0;
  int compscore = 0;
  string choices[3] = {"Rock", "Paper", "Scissors"};

  // dev tool ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //cout << comp;


  // while loop for infinite

  for(int i=1; i>0; i++) {
    if(i == 1){
      // introduction only written out on first loop.
      cout << "___________________________\n" << "rock paper scissors\n" << "___________________________\n";

      cout << "\n" << "1) Rock\n" << "2) Paper\n" << "3) Scissors\n";

      cout << "\nType 1, 2, or 3 to make your choice.\n";

    // output for subsequent rounds ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    } else{
      cout << "The current score is:\n" << "Player: " << userscore << "\nComputer: " << compscore;

      cout << "\n\nWould you like to continue playing?\n" << "1)Yes?\n" << "2) No?\n";
      cin >> user;

        if(user == 2){
          cout << "exiting game, goodbye.";
          system("sleep 5");
          break;
        } else {
          system("clear");
          cout << "Please enter your choice:\n" << "\n1) Rock\n" << "2) Paper\n" << "3) Scissors\n";
        } 
    }

    // write user choice to user variable
    cin >> user;

    // Clear screen
    system("clear");

    
    //showmanship ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    cout << "Rock.\n";
    system("sleep 1");
    cout << "Paper.\n";
    system("sleep 1");
    cout << "Scissors.\n";
    system("sleep 1");
    cout << "Shoot!!\n";
    system("sleep 1");

    // Clear screen
    system("clear");

    cout << "Your opponent chose...\n";
    system("sleep 2");
    cout << choices[comp-1] << "!\n";


    //Who won?~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    if (user == comp){
      cout << "It was a tie!";
    } else if((user-comp == 1) || (comp-user == 2)){
      userscore++;
      cout << "You've won!\n";
    } else{
      compscore++;
      cout << "Better luck next time.";
    }

    //reset for next loop
    system("sleep 4");
    system("clear");

  }
  
    return(0);

  


}
