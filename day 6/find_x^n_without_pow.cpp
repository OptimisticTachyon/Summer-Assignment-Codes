// Program to find nth power of a number (x) without using pow() function.

#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long result = 1;

    cout << "Enter the base number (x): ";
    cin >> x;
    cout << "Enter the power (n): ";
    cin >> n;

    if (n < 0) {
        cout << "Negative powers are not supported in this program." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    cout << x << " raised to the power " << n << " is " << result << endl;

    return 0;
}
