// Program to convert binary digits to decimal.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    long long temp = binary;

    while (temp > 0) {
        remainder = temp % 10;       // get last digit
        decimal += remainder * base; // add contribution
        base *= 2;                   // move to next power of 2
        temp /= 10;                  // remove last digit
    }

    cout << "Decimal equivalent of " << binary << " is " << decimal << endl;

    return 0;
}
