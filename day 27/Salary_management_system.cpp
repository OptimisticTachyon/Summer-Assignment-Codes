// Program to create salary management system.

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basicSalary;
    double hra;   // House Rent Allowance
    double da;    // Dearness Allowance
    double grossSalary;
};

int main() {
    Employee employees[50];   // max 50 employees
    int count = 0;            // number of employees
    int choice;

    do {
        cout << "\n===== Salary Management System =====" << endl;
        cout << "1. Add Employee Salary Record" << endl;
        cout << "2. Display All Salary Records" << endl;
        cout << "3. Search by Employee ID" << endl;
        cout << "4. Update Employee Salary" << endl;
        cout << "5. Exit" << endl;
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
                    cout << "Enter Basic Salary: ";
                    cin >> employees[count].basicSalary;

                    // Calculate allowances and gross salary
                    employees[count].hra = 0.2 * employees[count].basicSalary;
                    employees[count].da  = 0.1 * employees[count].basicSalary;
                    employees[count].grossSalary = employees[count].basicSalary + employees[count].hra + employees[count].da;

                    count++;
                    cout << "✅ Salary record added successfully!" << endl;
                } else {
                    cout << "❌ Maximum limit reached!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- All Salary Records ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << employees[i].id
                         << ", Name: " << employees[i].name
                         << ", Basic: Rs. " << employees[i].basicSalary
                         << ", HRA: Rs. " << employees[i].hra
                         << ", DA: Rs. " << employees[i].da
                         << ", Gross: Rs. " << employees[i].grossSalary << endl;
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
                             << ", Basic: Rs. " << employees[i].basicSalary
                             << ", HRA: Rs. " << employees[i].hra
                             << ", DA: Rs. " << employees[i].da
                             << ", Gross: Rs. " << employees[i].grossSalary << endl;
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
                        cout << "Enter new Basic Salary: ";
                        cin >> employees[i].basicSalary;

                        // Recalculate allowances and gross salary
                        employees[i].hra = 0.2 * employees[i].basicSalary;
                        employees[i].da  = 0.1 * employees[i].basicSalary;
                        employees[i].grossSalary = employees[i].basicSalary + employees[i].hra + employees[i].da;

                        cout << "✅ Salary record updated successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "❌ Record not found." << endl;
                break;
            }

            case 5:
                cout << "Exiting... Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 5);

    return 0;
}
