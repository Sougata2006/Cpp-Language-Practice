#include <iostream>
#include <iomanip>
using namespace std;

void showMainMenu() {
    cout << "\n=== UNIT CONVERTER ===\n";
    cout << "1. Length Converter\n";
    cout << "2. Weight Converter\n";
    cout << "3. Temperature Converter\n";
    cout << "4. How to Use\n";
    cout << "5. Exit\n";
    cout << "Choose an option (1-5): ";
}

void lengthMenu() {
    cout << "\n--- LENGTH CONVERTER ---\n";
    cout << "1. Meters to Feet\n";
    cout << "2. Feet to Meters\n";
    cout << "3. Back to Main Menu\n";
    cout << "Choose an option (1-3): ";
}

void weightMenu() {
    cout << "\n--- WEIGHT CONVERTER ---\n";
    cout << "1. Kilograms to Pounds\n";
    cout << "2. Pounds to Kilograms\n";
    cout << "3. Back to Main Menu\n";
    cout << "Choose an option (1-3): ";
}

void temperatureMenu() {
    cout << "\n--- TEMPERATURE CONVERTER ---\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Back to Main Menu\n";
    cout << "Choose an option (1-3): ";
}

void howToUse() {
    cout << "\n--- HOW TO USE ---\n";
    cout << "Select the type of conversion from the main menu.\n";
    cout << "Choose the direction of conversion.\n";
    cout << "Enter the value to convert. Result will be shown.\n";
    cout << "You can repeat as many times as you like!\n";
}

void lengthConverter() {
    int choice;
    double meters, feet;

    bool back = false;
    while (!back) {
        lengthMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter meters: ";
                cin >> meters;
                feet = meters * 3.28084;
                cout << fixed << setprecision(2);
                cout << meters << " meters = " << feet << " feet\n";
                break;
            case 2:
                cout << "Enter feet: ";
                cin >> feet;
                meters = feet / 3.28084;
                cout << fixed << setprecision(2);
                cout << feet << " feet = " << meters << " meters\n";
                break;
            case 3:
                back = true;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}

void weightConverter() {
    int choice;
    double kg, pounds;

    bool back = false;
    while (!back) {
        weightMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter kilograms: ";
                cin >> kg;
                pounds = kg * 2.20462;
                cout << fixed << setprecision(2);
                cout << kg << " kg = " << pounds << " pounds\n";
                break;
            case 2:
                cout << "Enter pounds: ";
                cin >> pounds;
                kg = pounds / 2.20462;
                cout << fixed << setprecision(2);
                cout << pounds << " pounds = " << kg << " kg\n";
                break;
            case 3:
                back = true;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}

void temperatureConverter() {
    int choice;
    double celsius, fahrenheit;

    bool back = false;
    while (!back) {
        temperatureMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Celsius: ";
                cin >> celsius;
                fahrenheit = (celsius * 9.0 / 5.0) + 32;
                cout << fixed << setprecision(2);
                cout << celsius << "°C = " << fahrenheit << "°F\n";
                break;
            case 2:
                cout << "Enter Fahrenheit: ";
                cin >> fahrenheit;
                celsius = (fahrenheit - 32) * 5.0 / 9.0;
                cout << fixed << setprecision(2);
                cout << fahrenheit << "°F = " << celsius << "°C\n";
                break;
            case 3:
                back = true;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}

int main() {
    int choice;
    bool running = true;

    while (running) {
        showMainMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                lengthConverter();
                break;
            case 2:
                weightConverter();
                break;
            case 3:
                temperatureConverter();
                break;
            case 4:
                howToUse();
                break;
            case 5:
                cout << "Thank you for using Unit Converter. Goodbye!\n";
                running = false;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
