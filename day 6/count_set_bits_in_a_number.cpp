// Program to count set bits in a number.

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    while (temp > 0) {
        if (temp & 1)   // check if last bit is 1
            count++;
        temp >>= 1;     // right shift to check next bit
    }

    cout << "Number of set bits in " << num << " is " << count << endl;

    return 0;
}
