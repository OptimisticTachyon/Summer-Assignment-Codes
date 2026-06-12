// Program to write a function to print the fibonacci series.

#include <iostream>
using namespace std;

// Function to print Fibonacci series
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";
    printFibonacci(terms);

    return 0;
}
