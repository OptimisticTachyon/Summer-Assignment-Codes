// Program to get row wise sum of a matrix.

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int mat[r][c];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Row-wise sums:\n";
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += mat[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}
