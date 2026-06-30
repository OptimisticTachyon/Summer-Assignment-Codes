//  Program to Create menu-driven calculator. 

#include <iostream>
using namespace std;

// Function to add
double add(double a, double b) {
    return a + b;
}

// Function to subtract
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply
double multiply(double a, double b) {
    return a * b;
}

// Function to divide
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\n===== Menu-Driven Calculator =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch(choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                result = divide(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 5:
                cout << "Exiting... Goodbye." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 5);

    return 0;
}
