// Program to write a function if a given number is palindrome or not.

#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a Palindrome." << endl;
    else
        cout << n << " is not a Palindrome." << endl;

    return 0;
}
