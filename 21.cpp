#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_ATTEMPTS = 7;

void showMenu() {
    cout << "\n=== NUMBER GUESSING GAME ===\n";
    cout << "1. Start Game\n";
    cout << "2. How to Play\n";
    cout << "3. View Score\n";
    cout << "4. Exit\n";
    cout << "Choose an option (1-4): ";
}

void howToPlay() {
    cout << "\n--- How to Play ---\n";
    cout << "The computer will choose a random number between 1 and 100.\n";
    cout << "You have " << MAX_ATTEMPTS << " attempts to guess the correct number.\n";
    cout << "After each guess, you'll be told if your guess is too high or too low.\n";
}

int playGame() {
    int number = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "\nGuess the number between 1 and 100!\n";

    while (attempts < MAX_ATTEMPTS) {
        cout << "Attempt " << (attempts + 1) << ": ";
        cin >> guess;

        if (guess < 1 || guess > 100) {
            cout << "Invalid input. Please enter between 1 and 100.\n";
            continue;
        }

        attempts++;

        if (guess == number) {
            cout << "🎉 Congratulations! You guessed it in " << attempts << " tries.\n";
            return 1; 
        } else if (guess < number) {
            cout << "Too low!\n";
        } else {
            cout << "Too high!\n";
        }
    }

    cout << "😞 You've used all attempts. The number was: " << number << "\n";
    return 0;  
}

int main() {
    srand(time(0));
    int choice;
    int totalGames = 0, wins = 0, losses = 0;
    bool running = true;

    while (running) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                totalGames++;
                int result = playGame();
                if (result == 1)
                    wins++;
                else
                    losses++;
                break;
            }
            case 2:
                howToPlay();
                break;
            case 3:
                cout << "\n--- Your Score ---\n";
                cout << "Games Played: " << totalGames << endl;
                cout << "Wins: " << wins << endl;
                cout << "Losses: " << losses << endl;
                break;
            case 4:
                cout << "Thanks for playing! Goodbye!\n";
                running = false;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
