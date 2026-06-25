// Program to sort the names alphabetically.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();

    char names[50][50];

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        cin.getline(names[i], 50);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[50];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
