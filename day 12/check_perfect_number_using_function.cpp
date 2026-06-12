// Program to write a function to check if the given number is perfect or not.

#include <iostream>
using namespace std;

// Function to check perfect number
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfect(n))
        cout << n << " is a Perfect Number." << endl;
    else
        cout << n << " is not a Perfect Number." << endl;

    return 0;
}
