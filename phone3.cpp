#include <iostream>
#include <string>

using namespace std;

class PhoneStore {
public:
    double budget;
    int choice;
    string name;

    void start() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Hello " << name << ", what is your total budget in Rs? ";
        cin >> budget;
    }

    void process() {
        string brand;
        double price = 0;

        // Display Menu
        cout << "\n--- AVAILABLE PHONES ---\n";
        cout << "1. Samsung (Rs 30000)\n";

        cout << "2. Apple   (Rs 60000)\n";

        cout << "3. Oppo    (Rs 25000)\n";

        cout << "4. Exit Store\n";

        cout << "Enter choice: ";
        cin >> choice;

        // Logic
        switch(choice)
    {


            case 1:
                brand = "Samsung";
                price = 30000;
                break;

            case 2:
                brand = "Apple";
                price = 60000;
                break;

            case 3:
                brand = "Oppo";
                price = 25000;
                break;

            case 4:
                cout << "Goodbye!"; return;

            default:
                cout << "Invalid choice!\n"; return;
    }


        if (price > budget) {
            cout << "Sorry, this is Rs " << (price - budget) << " over your budget.\n";
        } else {
            // Simple Discount (5% off)
            double finalPrice = price * 0.95;
            cout << "Great choice! With a 5% discount, it costs Rs " << finalPrice << endl;
            cout << "Purchase successful! Remaining budget: Rs " << (budget - finalPrice) << endl;
        }
    }
};

int main() {
    PhoneStore shop;
    shop.start();

    char stay = 'y';
    while (stay == 'y' || stay == 'Y') {
        shop.process();
        cout << "\nDo you want to check another phone? (y/n): ";
        cin >> stay;
    }

    return 0;
}
