// Program to print Armstrong numbers in a range.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; num++) {
        int temp = num, remainder, n = 0;
        double result = 0.0;

        // Count digits
        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = num;
        // Calculate sum of digits raised to power n
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if ((int)result == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
