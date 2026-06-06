// Program to check if the given number is strong or not.

#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, remainder, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Calculate sum of factorials of digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    // Check Strong Number condition
    if (sum == num)
        cout << num << " is a Strong Number." << endl;
    else
        cout << num << " is not a Strong Number." << endl;

    return 0;
}
