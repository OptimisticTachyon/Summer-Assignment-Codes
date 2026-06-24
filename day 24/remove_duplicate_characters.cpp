// Program to remove duplicate characters from a string.

#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    bool seen[256] = {false};
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            seen[ch] = true;
            str[j++] = ch;
        }
    }
    str[j] = '\0';

    cout << "String after removing duplicates: " << str << endl;

    return 0;
}
