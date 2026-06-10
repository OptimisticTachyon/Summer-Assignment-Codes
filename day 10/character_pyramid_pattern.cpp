// Program to print character pyramid.

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
        // print characters
        char ch = 'A';
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}
