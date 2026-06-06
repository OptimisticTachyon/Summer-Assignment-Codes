// Program to convert decimal digits into binary.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int binary[32];   // array to store binary digits
    int index = 0;

    // Convert decimal to binary
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    cout << "Binary equivalent: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
