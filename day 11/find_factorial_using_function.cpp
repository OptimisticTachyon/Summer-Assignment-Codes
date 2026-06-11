// Program to write a funtion to find the factorial of a number.

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num) << endl;

    return 0;
}
