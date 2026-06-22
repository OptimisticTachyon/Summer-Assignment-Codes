// Program to count the number of words in a given sentence.

#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int words = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = true;
            words++;
        } else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words = " << words << endl;

    return 0;
}
