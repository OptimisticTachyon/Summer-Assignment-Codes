// Program to create a menu-driven array operation system.

#include <iostream>
using namespace std;

const int MAX = 50;

// Function to display array
void display(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert element
void insert(int arr[], int &n, int element) {
    if (n >= MAX) {
        cout << "Array is full. Cannot insert." << endl;
        return;
    }
    arr[n] = element;
    n++;
    cout << "Element inserted successfully." << endl;
}

// Function to delete element by value
void deleteElement(int arr[], int &n, int element) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            found = true;
            cout << "Element deleted successfully." << endl;
            break;
        }
    }
    if (!found) cout << "Element not found." << endl;
}

// Function to search element
void search(int arr[], int n, int element) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            cout << "Element found at position " << i + 1 << "." << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Element not found." << endl;
}

int main() {
    int arr[MAX];
    int n = 0; // current size
    int choice, element;

    do {
        cout << "\n===== Menu-Driven Array Operation System =====" << endl;
        cout << "1. Insert Element" << endl;
        cout << "2. Delete Element" << endl;
        cout << "3. Search Element" << endl;
        cout << "4. Display Array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                insert(arr, n, element);
                break;
            case 2:
                cout << "Enter element to delete: ";
                cin >> element;
                deleteElement(arr, n, element);
                break;
            case 3:
                cout << "Enter element to search: ";
                cin >> element;
                search(arr, n, element);
                break;
            case 4:
                display(arr, n);
                break;
            case 5:
                cout << "Exiting... Goodbye." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 5);

    return 0;
}
