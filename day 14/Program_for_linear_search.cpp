// Program for linear search.

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int pos = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i; 
            break;   
        }
    }

    if (pos != -1)
        cout << "Element found at position " << pos + 1 << endl; 
    else
        cout << "Element not found in array." << endl;

    return 0;
}
