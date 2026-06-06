// Program to check if the given number is perfect or not.

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Find sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check condition
    if (sum == num)
        cout << num << " is a Perfect Number." << endl;
    else
        cout << num << " is not a Perfect Number." << endl;

    return 0;
}
