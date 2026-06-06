// Check if the given number is Armstrong or not.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Compute sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check Armstrong condition
    if ((int)result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
