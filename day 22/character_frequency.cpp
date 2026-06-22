// Program to find the frequency of each character in a given sentence or string.

#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int freq[256] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}
