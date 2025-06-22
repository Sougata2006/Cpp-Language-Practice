#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_HISTORY = 100;

struct Operation {
    double num1;
    double num2;
    char op;
    double result;
};

Operation history[MAX_HISTORY];
int historyCount = 0;

void showMenu() {
    cout << "\n=== SIMPLE CALCULATOR ===\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Show History\n";
    cout << "6. Clear History\n";
    cout << "7. Exit\n";
    cout << "Choose an option (1-7): ";
}

double calculate(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero!\n";
                return 0;
            }
            return a / b;
        default:
            cout << "Invalid operator!\n";
            return 0;
    }
}

void addToHistory(double a, double b, char op, double res) {
    if (historyCount < MAX_HISTORY) {
        history[historyCount++] = {a, b, op, res};
    }
}

void showHistory() {
    if (historyCount == 0) {
        cout << "No operations yet.\n";
        return;
    }
    cout << "\n--- Operation History ---\n";
    for (int i = 0; i < historyCount; ++i) {
        cout << fixed << setprecision(2);
        cout << i + 1 << ". " << history[i].num1 << " " << history[i].op << " " << history[i].num2
             << " = " << history[i].result << endl;
    }
}

void clearHistory() {
    historyCount = 0;
    cout << "History cleared.\n";
}

int main() {
    int choice;
    double num1, num2, result;
    char op;
    bool running = true;

    while (running) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                op = '+';
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = calculate(num1, num2, op);
                cout << "Result: " << result << endl;
                addToHistory(num1, num2, op, result);
                break;

            case 2:
                op = '-';
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = calculate(num1, num2, op);
                cout << "Result: " << result << endl;
                addToHistory(num1, num2, op, result);
                break;

            case 3:
                op = '*';
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = calculate(num1, num2, op);
                cout << "Result: " << result << endl;
                addToHistory(num1, num2, op, result);
                break;

            case 4:
                op = '/';
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = calculate(num1, num2, op);
                cout << "Result: " << result << endl;
                addToHistory(num1, num2, op, result);
                break;

            case 5:
                showHistory();
                break;

            case 6:
                clearHistory();
                break;

            case 7:
                cout << "Exiting Calculator. Goodbye!\n";
                running = false;
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
