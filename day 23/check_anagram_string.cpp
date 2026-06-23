// Program to check anagram strings.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        cout << "Strings are not anagrams." << endl;
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; i < len1; i++) {
        freq[(int)tolower(str1[i])]++;
    }

    for (int i = 0; i < len2; i++) {
        freq[(int)tolower(str2[i])]--;
    }

    bool anagram = true;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}
