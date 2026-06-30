// Program to create inventory management system.

#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

// Function to add item
void addItem(Item inventory[], int &count) {
    cout << "Enter Item ID: ";
    cin >> inventory[count].id;
    cin.ignore();
    cout << "Enter Item Name: ";
    getline(cin, inventory[count].name);
    cout << "Enter Quantity: ";
    cin >> inventory[count].quantity;
    cout << "Enter Price: ";
    cin >> inventory[count].price;
    count++;
    cout << "Item added successfully." << endl;
}

// Function to display all items
void displayAll(Item inventory[], int count) {
    if (count == 0) {
        cout << "No items in inventory." << endl;
        return;
    }
    cout << "\n--- Inventory Records ---" << endl;
    for (int i = 0; i < count; i++) {
        cout << "ID: " << inventory[i].id
             << ", Name: " << inventory[i].name
             << ", Quantity: " << inventory[i].quantity
             << ", Price: Rs. " << inventory[i].price << endl;
    }
}

// Function to search item by ID
void searchItem(Item inventory[], int count) {
    int id;
    cout << "Enter Item ID to search: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            cout << "Item Found: " << endl;
            cout << "ID: " << inventory[i].id
                 << ", Name: " << inventory[i].name
                 << ", Quantity: " << inventory[i].quantity
                 << ", Price: Rs. " << inventory[i].price << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Item not found." << endl;
}

// Function to update item
void updateItem(Item inventory[], int count) {
    int id;
    cout << "Enter Item ID to update: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            cin.ignore();
            cout << "Enter new Name: ";
            getline(cin, inventory[i].name);
            cout << "Enter new Quantity: ";
            cin >> inventory[i].quantity;
            cout << "Enter new Price: ";
            cin >> inventory[i].price;
            cout << "Item record updated successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Item not found." << endl;
}

// Function to delete item
void deleteItem(Item inventory[], int &count) {
    int id;
    cout << "Enter Item ID to delete: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                inventory[j] = inventory[j + 1]; // shift records
            }
            count--;
            cout << "Item deleted successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Item not found." << endl;
}

int main() {
    Item inventory[50];   // max 50 items
    int count = 0;
    int choice;

    do {
        cout << "\n===== Inventory Management System =====" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Display All Items" << endl;
        cout << "3. Search Item by ID" << endl;
        cout << "4. Update Item Record" << endl;
        cout << "5. Delete Item Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addItem(inventory, count); break;
            case 2: displayAll(inventory, count); break;
            case 3: searchItem(inventory, count); break;
            case 4: updateItem(inventory, count); break;
            case 5: deleteItem(inventory, count); break;
            case 6: cout << "Exiting... Goodbye." << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while(choice != 6);

    return 0;
}
