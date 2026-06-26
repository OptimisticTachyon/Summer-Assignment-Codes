// Program to create a number guessing game.

#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    srand(time(0));  // seed random number generator

    int secret = rand() % 100 + 1;  // random number between 1 and 100
    int guess, attempts = 0;

    cout << "Welcome to Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret)
            cout << "Too high! Try again." << endl;
        else if (guess < secret)
            cout << "Too low! Try again." << endl;
        else
            cout << "Correct! You guessed it in " << attempts << " attempts." << endl;

    } while (guess != secret);

    return 0;
}
