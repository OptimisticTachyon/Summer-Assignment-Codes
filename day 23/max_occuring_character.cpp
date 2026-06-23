// Program to check the maximum occuring character in a given string.


// Program type 1 : If we assume " " to be a character.

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

    int maxFreq = 0;
    char maxChar = '\0';
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    cout << "Maximum occurring character = '" << maxChar 
         << "' (appears " << maxFreq << " times)" << endl;

    return 0;
}


// Program type 2 : If we don't assume " " to be a character.

#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int freq[256] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[(int)str[i]]++;
        }
    }

    int maxFreq = 0;
    char maxChar = '\0';
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    cout << "Maximum occurring character = '" << maxChar 
         << "' (appears " << maxFreq << " times)" << endl;

    return 0;
}