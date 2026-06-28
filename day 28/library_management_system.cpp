// Program to create a library management system.

#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    int quantity;
};

int main() {
    Book library[50];   
    int count = 0;      
    int choice;

    do {
        cout << "\n===== Library Management System =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Search Book by ID" << endl;
        cout << "4. Update Book Record" << endl;
        cout << "5. Delete Book Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if (count < 50) {
                    cout << "Enter Book ID: ";
                    cin >> library[count].id;
                    cin.ignore();
                    cout << "Enter Title: ";
                    getline(cin, library[count].title);
                    cout << "Enter Author: ";
                    getline(cin, library[count].author);
                    cout << "Enter Quantity: ";
                    cin >> library[count].quantity;
                    count++;
                    cout << "Book added successfully!" << endl;
                } else {
                    cout << "Maximum limit reached!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- All Books ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << library[i].id
                         << ", Title: " << library[i].title
                         << ", Author: " << library[i].author
                         << ", Quantity: " << library[i].quantity << endl;
                }
                if (count == 0) cout << "No books found." << endl;
                break;
            }

            case 3: {
                int id;
                cout << "Enter Book ID to search: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        cout << "Book Found: " << endl;
                        cout << "ID: " << library[i].id
                             << ", Title: " << library[i].title
                             << ", Author: " << library[i].author
                             << ", Quantity: " << library[i].quantity << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found." << endl;
                break;
            }

            case 4: {
                int id;
                cout << "Enter Book ID to update: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        cin.ignore();
                        cout << "Enter new Title: ";
                        getline(cin, library[i].title);
                        cout << "Enter new Author: ";
                        getline(cin, library[i].author);
                        cout << "Enter new Quantity: ";
                        cin >> library[i].quantity;
                        cout << "Book record updated successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found." << endl;
                break;
            }

            case 5: {
                int id;
                cout << "Enter Book ID to delete: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        for (int j = i; j < count - 1; j++) {
                            library[j] = library[j + 1]; 
                        }
                        count--;
                        cout << "Book deleted successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found." << endl;
                break;
            }

            case 6:
                cout << "Exiting... Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 6);

    return 0;
}
