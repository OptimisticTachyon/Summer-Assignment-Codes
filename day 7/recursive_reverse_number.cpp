// Program for recursive reverse of a number.

#include <iostream>
using namespace std;

int reverseNumber(int num, int rev = 0) {
    if (num == 0)   // base case
        return rev;
    rev = rev * 10 + (num % 10);   // build reversed number
    return reverseNumber(num / 10, rev);  // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverseNumber(num);
    return 0;
}
