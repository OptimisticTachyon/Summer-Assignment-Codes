// Program to create a bank account system.

#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    int accNo;
    string name;
    double balance;
};

int main() {
    BankAccount accounts[50];   
    int count = 0;              
    int choice;

    do {
        cout << "\n===== Bank Account System =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Display All Accounts" << endl;
        cout << "3. Search Account by Number" << endl;
        cout << "4. Deposit Money" << endl;
        cout << "5. Withdraw Money" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if (count < 50) {
                    cout << "Enter Account Number: ";
                    cin >> accounts[count].accNo;
                    cin.ignore();
                    cout << "Enter Account Holder Name: ";
                    getline(cin, accounts[count].name);
                    cout << "Enter Initial Balance: ";
                    cin >> accounts[count].balance;
                    count++;
                    cout << "Account created successfully!" << endl;
                } else {
                    cout << "Maximum limit reached!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- All Accounts ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "Acc No: " << accounts[i].accNo
                         << ", Name: " << accounts[i].name
                         << ", Balance: Rs. " << accounts[i].balance << endl;
                }
                if (count == 0) cout << "No accounts found." << endl;
                break;
            }

            case 3: {
                int acc;
                cout << "Enter Account Number to search: ";
                cin >> acc;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].accNo == acc) {
                        cout << "Account Found: " << endl;
                        cout << "Acc No: " << accounts[i].accNo
                             << ", Name: " << accounts[i].name
                             << ", Balance: Rs. " << accounts[i].balance << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found." << endl;
                break;
            }

            case 4: {
                int acc;
                double amt;
                cout << "Enter Account Number to deposit: ";
                cin >> acc;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].accNo == acc) {
                        cout << "Enter amount to deposit: ";
                        cin >> amt;
                        if (amt > 0) {
                            accounts[i].balance += amt;
                            cout << "Deposited successfully! New Balance: Rs. " << accounts[i].balance << endl;
                        } else {
                            cout << "Invalid deposit amount." << endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found." << endl;
                break;
            }

            case 5: {
                int acc;
                double amt;
                cout << "Enter Account Number to withdraw: ";
                cin >> acc;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].accNo == acc) {
                        cout << "Enter amount to withdraw: ";
                        cin >> amt;
                        if (amt > 0 && amt <= accounts[i].balance) {
                            accounts[i].balance -= amt;
                            cout << "Withdrawal successful! New Balance: Rs. " << accounts[i].balance << endl;
                        } else if (amt > accounts[i].balance) {
                            cout << "Insufficient balance!" << endl;
                        } else {
                            cout << "Invalid withdrawal amount." << endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found." << endl;
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
