// Program to create mmini employee management system.

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

// Function to add employee
void addEmployee(Employee employees[], int &count) {
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
    cout << "Employee record added successfully." << endl;
}

// Function to display all employees
void displayAll(Employee employees[], int count) {
    if (count == 0) {
        cout << "No records found." << endl;
        return;
    }
    cout << "\n--- All Employee Records ---" << endl;
    for (int i = 0; i < count; i++) {
        cout << "ID: " << employees[i].id
             << ", Name: " << employees[i].name
             << ", Age: " << employees[i].age
             << ", Dept: " << employees[i].department
             << ", Salary: Rs. " << employees[i].salary << endl;
    }
}

// Function to search employee by ID
void searchEmployee(Employee employees[], int count) {
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
    if (!found) cout << "Record not found." << endl;
}

// Function to update employee
void updateEmployee(Employee employees[], int count) {
    int id;
    cout << "Enter Employee ID to update: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            cin.ignore();
            cout << "Enter new Name: ";
            getline(cin, employees[i].name);
            cout << "Enter new Age: ";
            cin >> employees[i].age;
            cin.ignore();
            cout << "Enter new Department: ";
            getline(cin, employees[i].department);
            cout << "Enter new Salary: ";
            cin >> employees[i].salary;
            cout << "Record updated successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Record not found." << endl;
}

// Function to delete employee
void deleteEmployee(Employee employees[], int &count) {
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
            cout << "Record deleted successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Record not found." << endl;
}

int main() {
    Employee employees[50];   // max 50 employees
    int count = 0;
    int choice;

    do {
        cout << "\n===== Mini Employee Management System =====" << endl;
        cout << "1. Add Employee Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search by Employee ID" << endl;
        cout << "4. Update Employee Record" << endl;
        cout << "5. Delete Employee Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addEmployee(employees, count); break;
            case 2: displayAll(employees, count); break;
            case 3: searchEmployee(employees, count); break;
            case 4: updateEmployee(employees, count); break;
            case 5: deleteEmployee(employees, count); break;
            case 6: cout << "Exiting... Goodbye." << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 6);

    return 0;
}
