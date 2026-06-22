// Program to check if the given string is paindrome or not.

#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    bool palindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
