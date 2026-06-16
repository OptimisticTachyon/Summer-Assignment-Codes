// Program to find the element with the maximum frequency in an array.

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

    int maxFreq = 0;
    int element = arr[0];

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
            if (count > maxFreq) {
                maxFreq = count;
                element = arr[i];
            }
        }
    }

    cout << "Element with maximum frequency = " << element 
         << " (occurs " << maxFreq << " times)" << endl;

    return 0;
}
