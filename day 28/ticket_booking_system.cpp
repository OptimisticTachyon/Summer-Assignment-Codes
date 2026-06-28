// Program to create a ticket booking system.

#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int id;
    string passengerName;
    string destination;
    int seats;
    bool booked;
};

int main() {
    Ticket tickets[50];   
    int count = 0;        
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. Display All Tickets" << endl;
        cout << "3. Search Ticket by ID" << endl;
        cout << "4. Update Ticket" << endl;
        cout << "5. Cancel Ticket" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if (count < 50) {
                    tickets[count].id = count + 1;
                    cin.ignore();
                    cout << "Enter Passenger Name: ";
                    getline(cin, tickets[count].passengerName);
                    cout << "Enter Destination: ";
                    getline(cin, tickets[count].destination);
                    cout << "Enter Number of Seats: ";
                    cin >> tickets[count].seats;
                    tickets[count].booked = true;
                    cout << "Ticket booked successfully! Ticket ID: " << tickets[count].id << endl;
                    count++;
                } else {
                    cout << "Booking limit reached!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- All Tickets ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << tickets[i].id
                         << ", Name: " << tickets[i].passengerName
                         << ", Destination: " << tickets[i].destination
                         << ", Seats: " << tickets[i].seats
                         << ", Status: " << (tickets[i].booked ? "Booked" : "Cancelled") << endl;
                }
                if (count == 0) cout << "No tickets found." << endl;
                break;
            }

            case 3: {
                int id;
                cout << "Enter Ticket ID to search: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (tickets[i].id == id) {
                        cout << "Ticket Found: " << endl;
                        cout << "ID: " << tickets[i].id
                             << ", Name: " << tickets[i].passengerName
                             << ", Destination: " << tickets[i].destination
                             << ", Seats: " << tickets[i].seats
                             << ", Status: " << (tickets[i].booked ? "Booked" : "Cancelled") << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Ticket not found." << endl;
                break;
            }

            case 4: {
                int id;
                cout << "Enter Ticket ID to update: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (tickets[i].id == id && tickets[i].booked) {
                        cin.ignore();
                        cout << "Enter new Destination: ";
                        getline(cin, tickets[i].destination);
                        cout << "Enter new Number of Seats: ";
                        cin >> tickets[i].seats;
                        cout << "Ticket updated successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Ticket not found or already cancelled." << endl;
                break;
            }

            case 5: {
                int id;
                cout << "Enter Ticket ID to cancel: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (tickets[i].id == id && tickets[i].booked) {
                        tickets[i].booked = false;
                        cout << "Ticket cancelled successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Ticket not found or already cancelled." << endl;
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
