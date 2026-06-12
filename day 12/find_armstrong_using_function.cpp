// Program to write a function to find armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong Number." << endl;
    else
        cout << n << " is not an Armstrong Number." << endl;

    return 0;
}
