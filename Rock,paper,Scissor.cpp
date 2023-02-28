// Alain Puron
// Rock,paper,Scissor
// 10/23/22

#include <cstdlib> 
#include <ctime>
#include <iostream>
using namespace std;

void gameMenu(int&);
void gamePlay(int& ,int&);
void random(int&);

int main()
{
    // choice variable
    int choice = 0;
    int computer = 0;
    // loops the functions until choice is 4
    while (choice != 6) {
        // generates a random number
        random(computer);

        // game menu ,pick a choice
        gameMenu(choice);

        // decides who wins ,tie or loses
        gamePlay(choice, computer);
    }
       

}
void random(int &computer) {
    // generates a random number between 1 and 3 each time
    srand((unsigned)time(0));
    computer = (rand() % 3) + 1;
}


void gameMenu(int &choice) {
    // game manu ,options are displayed 
    cout << "\nGame Menu\n";
    cout << "---------------\n";
    cout << "(1)Rock\n"
        "(2)Paper\n"
        "(3)Scissor\n"
        "(4)Lizard\n"
        "(5)Spock\n"
        "(6)Quit\n";

    // Enter a choice
    cout << "\nEnter a choice: ";
    cin >> choice;
}

void gamePlay(int &choice ,int &computer) {

    // string variables 
    string playerChoice = "You selected: ";
    string computerChoice = "The computer selected: ";
    string tie = "Tie.No Winner \n";
    string computerWins = "Computer win!";
    string playerWin = "YOU win! ";

    // choice is moved to a switch 
    switch (choice) {

        // rock
    case 1:
        if (computer == 1) {
            cout << playerChoice << "Rock\n";
            cout << computerChoice << "Rock\n";
            cout << tie;
        }
        else if (computer == 2) {
            cout << playerChoice << "Rock\n";
            cout << computerChoice << "Paper\n";
            cout << computerWins <<" Paper wraps rock";
        }
        else if (computer == 3) {
            cout << playerChoice << "Rock\n";
            cout << computerChoice << "Scissor\n";
            cout << playerWin << " Rock smashes Scissors";
        }
        else if (computer == 4) {
            cout << playerChoice << "Rock\n";
            cout << computerChoice << "Lizard\n";
            cout << playerWin << " Rock crushes Lizard";
        }
        else if (computer == 5) {
            cout << playerChoice << "Rock\n";
            cout << computerChoice << "Spock\n";
            cout << computerWins << " Spock vaporizes Rock";
        }
        break;

        // paper
    case 2:
        if (computer == 1) {
            cout << playerChoice << "Paper\n";
            cout << computerChoice << "Rock\n";
            cout << playerWin << " Paper wraps Rock";
        }
        else if (computer == 2) {
            cout << playerChoice << "Paper\n";
            cout << computerChoice << "Paper\n";
            cout << tie;
        }
        else if (computer == 3) {
            cout << playerChoice << "Paper\n";
            cout << computerChoice << "Scissor\n";
            cout << computerWins << " Scissor cuts Paper";
        }
        else if (computer == 4) {
            cout << playerChoice << "Paper\n";
            cout << computerChoice << "Lizard\n";
            cout << computerWins << "Lizard eats Paper";
        }
        else if (computer == 5) {
            cout << playerChoice << "Paper\n";
            cout << computerChoice << "Spock\n";
            cout << playerWin << " Paper disproves Spock";
        }
        break;
        // scissor
    case 3:
        if (computer == 1) {
            cout << playerChoice << "Scissor\n";
            cout << computerChoice << "Rock\n";
            cout << computerWins << " Rock smashes Scissors";
        }
        else if (computer == 2) {
            cout << playerChoice << "Scissor\n";
            cout << computerChoice << "Paper\n";
            cout << playerWin << " Scissor cuts Paper";
        }
        else if (computer == 3) {
            cout << playerChoice << "Scissor\n";
            cout << computerChoice << "Scissor\n";
            cout << tie;
        }
        else if (computer == 4) {
            cout << playerChoice << "Scissor\n";
            cout << computerChoice << "Lizard\n";
            cout << playerWin << "Scissor decapitates Lizard";
        }
        else if (computer == 5) {
            cout << playerChoice << "Scissor\n";
            cout << computerChoice << "Spock\n";
            cout << computerWins << " Spock smashes Scissors";
        }
        break;
        // lizard
    case 4:
         if (computer == 1) {
            cout << playerChoice << "Lizard\n";
            cout << computerChoice << "Rock\n";
            cout << computerWins << " Rock crushes Lizard";
        }
         else if (computer == 2) {
             cout << playerChoice << "Lizard\n";
             cout << computerChoice << "Paper\n";
             cout << playerWin << "Lizard eats Paper";
         }
         else if (computer == 3) {
             cout << playerChoice << "Lizard\n";
             cout << computerChoice << "Scissor\n";
             cout << computerWins << "Scissor decapitates Lizard";
         }

         else if (computer == 4) {
             cout << playerChoice << "Lizard\n";
             cout << computerChoice << "Lizard\n";
             cout << tie;
         }
         else if (computer == 5) {
             cout << playerChoice << "Lizard\n";
             cout << computerChoice << "Spock\n";
             cout << playerWin << " Lizard poisons Spock";
         }
        break;

        // spock
    case 5:
         if (computer == 1) {
             cout << playerChoice << "Spock\n";
             cout << computerChoice << "Rock\n";
             cout << playerWin << " Spock vaporizes Rock";
         }
         else if (computer == 2) {
             cout << playerChoice << "Spock\n";
             cout << computerChoice << "Paper\n";
             cout << computerWins << " Paper disproves Spock";
         }
         else if (computer == 3) {
             cout << playerChoice << "Spock\n";
             cout << computerChoice << "Scissor\n";
             cout << playerWin << " Spock smashes Scissors";
         }
         else if (computer == 4) {
             cout << playerChoice << "Spock\n";
             cout << computerChoice << "Lizard\n";
             cout << computerWins << " Lizard poisons Spock";
         }
         else if (computer == 5) {
             cout << playerChoice << "Spock\n";
             cout << computerChoice << "Spock\n";
             cout << tie;
         }
        break;
    default:
        cout << "Quit";
    }
}