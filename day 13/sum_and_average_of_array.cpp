// Program to find sum and average of an array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100]; 
    int sum = 0;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // directly add while inputting
    }

    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
