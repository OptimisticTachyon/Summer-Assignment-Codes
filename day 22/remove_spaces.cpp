// Program to remove the spaces between the words in a sentence.

#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {  
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';  

    cout << "Sentence without spaces: " << str << endl;

    return 0;
}
