#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showMenu() {
    cout << "\n=== ROCK, PAPER, SCISSORS GAME ===\n";
    cout << "1. Play Game\n";
    cout << "2. View Score\n";
    cout << "3. How to Play\n";
    cout << "4. Exit\n";
    cout << "Choose an option (1-4): ";
}

void howToPlay() {
    cout << "\n--- How to Play ---\n";
    cout << "Choose one of the following:\n";
    cout << "1 = Rock\n2 = Paper\n3 = Scissors\n";
    cout << "Rock beats Scissors, Scissors beats Paper, Paper beats Rock.\n";
    cout << "Try to beat the computer!\n";
}

string choiceToString(int choice) {
    if (choice == 1) return "Rock";
    else if (choice == 2) return "Paper";
    else if (choice == 3) return "Scissors";
    else return "Invalid";
}

int getComputerChoice() {
    return rand() % 3 + 1;
}

int playRound() {
    int userChoice;
    cout << "\nMake your move (1 = Rock, 2 = Paper, 3 = Scissors): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice!\n";
        return -1; 
    }

    int compChoice = getComputerChoice();

    cout << "You chose: " << choiceToString(userChoice) << endl;
    cout << "Computer chose: " << choiceToString(compChoice) << endl;

    if (userChoice == compChoice) {
        cout << "It's a draw!\n";
        return 0;
    }

    if ((userChoice == 1 && compChoice == 3) || 
        (userChoice == 2 && compChoice == 1) ||
        (userChoice == 3 && compChoice == 2)) {
        cout << "You win this round!\n";
        return 1;
    } else {
        cout << "Computer wins this round!\n";
        return 2;
    }
}

int main() {
    srand(time(0));
    int choice;
    int wins = 0, losses = 0, draws = 0;

    bool playing = true;

    while (playing) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                int result = playRound();
                if (result == 1) wins++;
                else if (result == 2) losses++;
                else if (result == 0) draws++;
                break;
            }
            case 2:
                cout << "\n--- Your Score ---\n";
                cout << "Wins: " << wins << endl;
                cout << "Losses: " << losses << endl;
                cout << "Draws: " << draws << endl;
                break;
            case 3:
                howToPlay();
                break;
            case 4:
                cout << "Thanks for playing! Goodbye!\n";
                playing = false;
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
