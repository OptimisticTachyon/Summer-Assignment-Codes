// Program to create employee management system.

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    string department;
    double salary;
};

int main() {
    Employee employees[50];   // max 50 employees
    int count = 0;            // number of employees
    int choice;

    do {
        cout << "\n===== Employee Management System =====" << endl;
        cout << "1. Add Employee Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search by Employee ID" << endl;
        cout << "4. Update Employee Record" << endl;
        cout << "5. Delete Employee Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if (count < 50) {
                    cout << "Enter Employee ID: ";
                    cin >> employees[count].id;
                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, employees[count].name);
                    cout << "Enter Age: ";
                    cin >> employees[count].age;
                    cin.ignore();
                    cout << "Enter Department: ";
                    getline(cin, employees[count].department);
                    cout << "Enter Salary: ";
                    cin >> employees[count].salary;
                    count++;
                    cout << "✅ Employee record added successfully!" << endl;
                } else {
                    cout << "❌ Maximum limit reached!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- All Employee Records ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << employees[i].id
                         << ", Name: " << employees[i].name
                         << ", Age: " << employees[i].age
                         << ", Dept: " << employees[i].department
                         << ", Salary: Rs. " << employees[i].salary << endl;
                }
                if (count == 0) cout << "No records found." << endl;
                break;
            }

            case 3: {
                int id;
                cout << "Enter Employee ID to search: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        cout << "Record Found: " << endl;
                        cout << "ID: " << employees[i].id
                             << ", Name: " << employees[i].name
                             << ", Age: " << employees[i].age
                             << ", Dept: " << employees[i].department
                             << ", Salary: Rs. " << employees[i].salary << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "❌ Record not found." << endl;
                break;
            }

            case 4: {
                int id;
                cout << "Enter Employee ID to update: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        cout << "Enter new Name: ";
                        cin.ignore();
                        getline(cin, employees[i].name);
                        cout << "Enter new Age: ";
                        cin >> employees[i].age;
                        cin.ignore();
                        cout << "Enter new Department: ";
                        getline(cin, employees[i].department);
                        cout << "Enter new Salary: ";
                        cin >> employees[i].salary;
                        cout << "✅ Record updated successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "❌ Record not found." << endl;
                break;
            }

            case 5: {
                int id;
                cout << "Enter Employee ID to delete: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        for (int j = i; j < count - 1; j++) {
                            employees[j] = employees[j + 1]; // shift records
                        }
                        count--;
                        cout << "✅ Record deleted successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "❌ Record not found." << endl;
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
