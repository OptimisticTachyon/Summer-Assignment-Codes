// Program to find the first non-repeating character in the given string.

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

    char result = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            result = str[i];
            break;
        }
    }

    if (result != '\0')
        cout << "First non-repeating character = '" << result << "'" << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}
