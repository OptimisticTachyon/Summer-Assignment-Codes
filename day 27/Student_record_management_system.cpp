// Program to create a student record management system.

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
    string course;
};

int main() {
    Student students[50];   // max 50 students
    int count = 0;          // number of students
    int choice;

    do {
        cout << "\n===== Student Record Management System =====" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search by Roll Number" << endl;
        cout << "4. Update Student Record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if (count < 50) {
                    cout << "Enter Roll Number: ";
                    cin >> students[count].rollNo;
                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, students[count].name);
                    cout << "Enter Age: ";
                    cin >> students[count].age;
                    cin.ignore();
                    cout << "Enter Course: ";
                    getline(cin, students[count].course);
                    count++;
                    cout << "✅ Record added successfully!" << endl;
                } else {
                    cout << "❌ Maximum limit reached!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- All Student Records ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "Roll No: " << students[i].rollNo
                         << ", Name: " << students[i].name
                         << ", Age: " << students[i].age
                         << ", Course: " << students[i].course << endl;
                }
                if (count == 0) cout << "No records found." << endl;
                break;
            }

            case 3: {
                int roll;
                cout << "Enter Roll Number to search: ";
                cin >> roll;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (students[i].rollNo == roll) {
                        cout << "Record Found: " << endl;
                        cout << "Roll No: " << students[i].rollNo
                             << ", Name: " << students[i].name
                             << ", Age: " << students[i].age
                             << ", Course: " << students[i].course << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "❌ Record not found." << endl;
                break;
            }

            case 4: {
                int roll;
                cout << "Enter Roll Number to update: ";
                cin >> roll;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (students[i].rollNo == roll) {
                        cout << "Enter new Name: ";
                        cin.ignore();
                        getline(cin, students[i].name);
                        cout << "Enter new Age: ";
                        cin >> students[i].age;
                        cin.ignore();
                        cout << "Enter new Course: ";
                        getline(cin, students[i].course);
                        cout << "✅ Record updated successfully!" << endl;
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
