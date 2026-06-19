// Program to find the diagonal sum of a matrix.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int mat[n][n];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + mat[i][i];
    }

    cout << "Sum of diagonal elements = " << sum << endl;

    return 0;
}
