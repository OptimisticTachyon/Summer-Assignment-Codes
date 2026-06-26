// Program to create voting eligibility system.

#include <iostream>
#include <cstring>   // for strcmp, strcasecmp (if available)
using namespace std;

int main() {
    int age;
    char citizen[10];

    cout << "Enter your age : ";
    cin >> age;

    cout << "Are you an Inidan citizen ? (yes/no) : ";
    cin >> citizen;

    // Convert input to lowercase manually (to handle YES/NO in caps)
    for (int i = 0; citizen[i] != '\0'; i++) {
        citizen[i] = tolower(citizen[i]);
    }

    if (age >= 18 && strcmp(citizen, "yes") == 0) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote because ";
        if (age < 18 && strcmp(citizen, "yes") != 0) {
            cout << "you are under 18 years old AND not an Indian citizen." << endl;
        } else if (age < 18) {
            cout << "you are under 18 years old." << endl;
        } else if (strcmp(citizen, "yes") != 0) {
            cout << "you are not an Indian citizen." << endl;
        }
    }

    return 0;
}


