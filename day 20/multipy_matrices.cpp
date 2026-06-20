// Program to multiply two matrices.

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter number of rows for first matrix: ";
    cin >> r1;
    cout << "Enter number of columns for first matrix: ";
    cin >> c1;

    cout << "Enter number of rows for second matrix: ";
    cin >> r2;
    cout << "Enter number of columns for second matrix: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

