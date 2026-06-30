// Program to Develop complete mini project using arrays, strings and functions.

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

// Function to calculate grade
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}

// Function to add student
void addStudent(Student students[], int &count) {
    cout << "Enter Roll Number: ";
    cin >> students[count].rollNo;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, students[count].name);

    students[count].total = 0;
    cout << "Enter marks in 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": ";
        cin >> students[count].marks[i];
        students[count].total += students[count].marks[i];
    }

    students[count].percentage = students[count].total / 5.0;
    students[count].grade = calculateGrade(students[count].percentage);

    cout << "Student record added successfully!" << endl;
    count++;
}

// Function to display all students
void displayAll(Student students[], int count) {
    if (count == 0) {
        cout << "No records found." << endl;
        return;
    }
    cout << "\n--- All Student Records ---" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Roll No: " << students[i].rollNo
             << ", Name: " << students[i].name
             << ", Total: " << students[i].total
             << ", Percentage: " << students[i].percentage
             << "%, Grade: " << students[i].grade << endl;
    }
}

// Function to search student by roll number
void searchStudent(Student students[], int count) {
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            cout << "Record Found: " << endl;
            cout << "Roll No: " << students[i].rollNo
                 << ", Name: " << students[i].name
                 << ", Total: " << students[i].total
                 << ", Percentage: " << students[i].percentage
                 << "%, Grade: " << students[i].grade << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Record not found." << endl;
}

int main() {
    Student students[50];   // max 50 students
    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Management System =====" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search by Roll Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(students, count); break;
            case 2: displayAll(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: cout << "Exiting... Goodbye!" << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 4);

    return 0;
}
