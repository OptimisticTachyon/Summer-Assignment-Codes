// Program to print number pyramid.

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // print increasing numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        // print decreasing numbers
        for (int k = i - 1; k >= 1; k--) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}
