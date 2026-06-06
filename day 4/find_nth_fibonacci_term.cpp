// Program to find the nth fibonacci term.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    long long first = 0, second = 1, next;

    if (n == 1) {
        cout << "Fibonacci term at position " << n << " is " << first << endl;
    } else if (n == 2) {
        cout << "Fibonacci term at position " << n << " is " << second << endl;
    } else {
        for (int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Fibonacci term at position " << n << " is " << second << endl;
    }

    return 0;
}
