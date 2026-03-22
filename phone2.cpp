#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // For better formatting

using namespace std;

class Phone {
private:
    string brand;
    string model;
    double price;

public:
    // Constructor to easily create new phone objects
    Phone(string b, string m, double p) : brand(b), model(m), price(p) {}

    // Getters
    string getBrand() const { return brand; }
    double getPrice() const { return price; }

    // Method to display phone info
    void display(int index) const {
        cout << index << ". " << setw(10) << left << brand
             << " | Model: " << setw(12) << model
             << " | Price: Rs." << price << endl;
    }
};

class Store {
private:
    vector<Phone> inventory;

public:
    void addPhone(Phone p) {
        inventory.push_back(p);
    }

    void showMenu() {
        cout << "\n--- WELCOME TO THE SMARTPHONE STORE ---\n";
        for (int i = 0; i < inventory.size(); ++i) {
            inventory[i].display(i + 1);
        }
        cout << inventory.size() + 1 << ". Exit\n";
    }

    void processPurchase() {
        int choice;
        while (true) {
            showMenu();
            cout << "\nEnter the number of the phone you like: ";

            if (!(cin >> choice)) { // Check if input is a valid number
                cout << "Invalid input! Please enter a number.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

            if (choice == inventory.size() + 1) {
                cout << "Thank you for visiting!\n";
                break;
            }

            if (choice > 0 && choice <= inventory.size()) {
                Phone selected = inventory[choice - 1];
                cout << "\nYou selected " << selected.getBrand() << " for Rs." << selected.getPrice() << endl;
                cout << "Confirm purchase? (yes/no): ";
                string confirm;
                cin >> confirm;

                if (confirm == "yes" || confirm == "y") {
                    cout << "Congratulations! Your " << selected.getBrand() << " is being packed.\n";
                } else {
                    cout << "No problem! Feel free to look at others.\n";
                }
            } else {
                cout << "Invalid selection. Please try again.\n";
            }
        }
    }
};

int main() {
    Store myStore;

    // Adding phones to the inventory
    myStore.addPhone(Phone("Samsung", "S23 Ultra", 30000));
    myStore.addPhone(Phone("Apple", "iPhone 15", 60000));
    myStore.addPhone(Phone("Oppo", "Reno 10", 25000));
    myStore.addPhone(Phone("Vivo", "V27 Pro", 23000));
    myStore.addPhone(Phone("Google", "Pixel 8", 50000));

    myStore.processPurchase();

    return 0;
}
