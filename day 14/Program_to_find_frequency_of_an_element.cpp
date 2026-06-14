// Program to find the frequency of elements in an array.

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

    cout << "Frequency of elements:" << endl;
    for (int i = 0; i < n; i++) {
        int count = 1;
        bool visited = false;

        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                visited = true;
                break;
            }
        }

        if (!visited) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            cout << arr[i] << " occurs " << count << " times" << endl;
        }
    }

    return 0;
}
