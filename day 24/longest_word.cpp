// Program to find the longest word in a string.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int maxLen = 0, currLen = 0;
    char longest[200];
    char currWord[200];

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currWord[j++] = str[i];
            currLen++;
        } else {
            currWord[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, currWord);
            }
            currLen = 0;
            j = 0;
        }
    }

    currWord[j] = '\0';
    if (currLen > maxLen) {
        maxLen = currLen;
        strcpy(longest, currWord);
    }

    cout << "Longest word = " << longest << endl;
    cout << "Length = " << maxLen << endl;

    return 0;
}
