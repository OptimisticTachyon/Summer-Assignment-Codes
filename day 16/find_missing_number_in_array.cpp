// Program to find the missing number in an array.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n (size including all numbers from 1 to n): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " numbers : " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Frequency array
    vector<int> freq(n+1, 0);

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 1 && arr[i] <= n) {
            freq[arr[i]]++;
        }
    }

    bool missingFound = false;
    for(int i = 1; i <= n; i++) {
        if(freq[i] == 0) {
            cout << "Missing number: " << i << endl;
            missingFound = true;
        }
        else if(freq[i] > 1) {
            cout << "Duplicate number: " << i << endl;
        }
    }

    if(!missingFound) {
        cout << "No number is missing!" << endl;
    }

    return 0;
}
