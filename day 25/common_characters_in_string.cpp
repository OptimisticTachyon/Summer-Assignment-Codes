// Program to find the common characters in a string.

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

    cout << "Common characters in the string:\n";
    bool found = false;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            cout << (char)i << " : " << freq[i] << " times" << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No common characters found." << endl;

    return 0;
}
