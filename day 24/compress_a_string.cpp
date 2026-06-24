// Program to compress a string.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int len = strlen(str);

    cout << "Compressed string: ";
    for (int i = 0; i < len; i++) {
        int count = 1;
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        cout << str[i] << count;
    }

    cout << endl;
    return 0;
}
