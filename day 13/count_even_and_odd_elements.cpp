// Program to count even and odd elements in an array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Number of even elements = " << evenCount << endl;
    cout << "Number of odd elements = " << oddCount << endl;

    return 0;
}
