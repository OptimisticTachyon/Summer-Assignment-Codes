// Program  to check symmetric matrices.

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

    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        cout << "The matrix is symmetric." << endl;
    else
        cout << "The matrix is not symmetric." << endl;

    return 0;
}
