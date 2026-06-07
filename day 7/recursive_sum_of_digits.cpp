// Program for recursive sum of digits.

#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    if (num == 0)   // base case
        return 0;
    return (num % 10) + sumOfDigits(num / 10);  // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumOfDigits(num);
    return 0;
}
