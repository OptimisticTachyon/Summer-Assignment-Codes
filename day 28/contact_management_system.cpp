// Program to create a contact management system.

#include <iostream>
#include <string>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
    string email;
};

int main() {
    Contact contacts[50];   // max 50 contacts
    int count = 0;          // number of contacts
    int choice;

    do {
        cout << "\n===== Contact Management System =====" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Display All Contacts" << endl;
        cout << "3. Search by Contact ID" << endl;
        cout << "4. Update Contact" << endl;
        cout << "5. Delete Contact" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if (count < 50) {
                    cout << "Enter Contact ID: ";
                    cin >> contacts[count].id;
                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, contacts[count].name);
                    cout << "Enter Phone: ";
                    getline(cin, contacts[count].phone);
                    cout << "Enter Email: ";
                    getline(cin, contacts[count].email);
                    count++;
                    cout << "✅ Contact added successfully!" << endl;
                } else {
                    cout << "❌ Maximum limit reached!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- All Contacts ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << contacts[i].id
                         << ", Name: " << contacts[i].name
                         << ", Phone: " << contacts[i].phone
                         << ", Email: " << contacts[i].email << endl;
                }
                if (count == 0) cout << "No contacts found." << endl;
                break;
            }

            case 3: {
                int id;
                cout << "Enter Contact ID to search: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].id == id) {
                        cout << "Contact Found: " << endl;
                        cout << "ID: " << contacts[i].id
                             << ", Name: " << contacts[i].name
                             << ", Phone: " << contacts[i].phone
                             << ", Email: " << contacts[i].email << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "❌ Contact not found." << endl;
                break;
            }

            case 4: {
                int id;
                cout << "Enter Contact ID to update: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].id == id) {
                        cout << "Enter new Name: ";
                        cin.ignore();
                        getline(cin, contacts[i].name);
                        cout << "Enter new Phone: ";
                        getline(cin, contacts[i].phone);
                        cout << "Enter new Email: ";
                        getline(cin, contacts[i].email);
                        cout << "✅ Contact updated successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Contact not found." << endl;
                break;
            }

            case 5: {
                int id;
                cout << "Enter Contact ID to delete: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].id == id) {
                        for (int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j + 1]; 
                        }
                        count--;
                        cout << "Contact deleted successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Contact not found." << endl;
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
