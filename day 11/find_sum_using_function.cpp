// Program to write a function that finds the sum of two numbers.

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Sum = " << sum(x, y) << endl;

    return 0;
}
