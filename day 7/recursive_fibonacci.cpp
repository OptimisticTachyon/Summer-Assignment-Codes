// Program for recursive fibonacci.

#include <iostream>
using namespace std;

// Recursive function to find nth Fibonacci term
int fibonacci(int n) {
    if (n == 0)   // base case 1
        return 0;
    else if (n == 1)  // base case 2
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive calls
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
