#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newSize = n;

    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--; 
                j--;       
            }
        }
    }

    cout << "Array after removing duplicates:" << endl;
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
