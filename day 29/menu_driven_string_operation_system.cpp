// Program to create a menu-driven string operation system.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to concatenate two strings
void concatenate(string s1, string s2) {
    cout << "Concatenated String: " << s1 + s2 << endl;
}

// Function to compare two strings
void compareStrings(string s1, string s2) {
    if (s1 == s2)
        cout << "Strings are equal." << endl;
    else
        cout << "Strings are not equal." << endl;
}

// Function to find length of string
void lengthString(string s) {
    cout << "Length of string: " << s.length() << endl;
}

// Function to reverse string
void reverseString(string s) {
    reverse(s.begin(), s.end());
    cout << "Reversed String: " << s << endl;
}

// Function to copy string
void copyString(string s) {
    string copy = s;
    cout << "Copied String: " << copy << endl;
}

int main() {
    int choice;
    string str1, str2;

    do {
        cout << "\n===== Menu-Driven String Operation System =====" << endl;
        cout << "1. Concatenate Two Strings" << endl;
        cout << "2. Compare Two Strings" << endl;
        cout << "3. Find Length of String" << endl;
        cout << "4. Reverse String" << endl;
        cout << "5. Copy String" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                concatenate(str1, str2);
                break;
            case 2:
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                compareStrings(str1, str2);
                break;
            case 3:
                cout << "Enter string: ";
                getline(cin, str1);
                lengthString(str1);
                break;
            case 4:
                cout << "Enter string: ";
                getline(cin, str1);
                reverseString(str1);
                break;
            case 5:
                cout << "Enter string: ";
                getline(cin, str1);
                copyString(str1);
                break;
            case 6:
                cout << "Exiting... Goodbye." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 6);

    return 0;
}
