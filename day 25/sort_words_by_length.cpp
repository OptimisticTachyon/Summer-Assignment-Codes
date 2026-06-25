// Program to sort words by their length.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    char words[50][50];
    int count = 0;

    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[count++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                char temp[50];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < count; i++) {
        cout << words[i] << endl;
    }

    return 0;
}
