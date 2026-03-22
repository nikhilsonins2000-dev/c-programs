#include <iostream>
#include <iomanip>
using namespace std;

class PhoneStore
{
private:
    int choice;
    int budget;
    int price;
    int quantity;
    string phoneName;
    string buyResponse;
    string paymentMode;

public:
    void welcome()
    {
        cout << "=====================================\n";
        cout << "   WELCOME TO SMART PHONE STORE\n";
        cout << "=====================================\n\n";
    }

    void showMenu()
    {
        cout << "Available Phones:\n";
        cout << "1. Samsung        - Rs. 30000\n";
        cout << "2. Apple (iPhone) - Rs. 60000\n";
        cout << "3. Oppo           - Rs. 25000\n";
        cout << "4. Vivo           - Rs. 23000\n";
        cout << "5. Google Pixel   - Rs. 50000\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
    }

    void selectPhone()
    {
        switch (choice)
        {
        case 1:
            phoneName = "Samsung";
            price = 30000;
            break;
        case 2:
            phoneName = "Apple iPhone";
            price = 60000;
            break;
        case 3:
            phoneName = "Oppo";
            price = 25000;
            break;
        case 4:
            phoneName = "Vivo";
            price = 23000;
            break;
        case 5:
            phoneName = "Google Pixel";
            price = 50000;
            break;
        default:
            cout << "\n❌ Invalid choice!\n";
            price = 0;
        }
    }

    void checkBudget()
    {
        if (price == 0)
            return;

        cout << "\nEnter your budget (Rs): ";
        cin >> budget;

        if (budget < price)
        {
            cout << "❌ Sorry! This phone is out of your budget.\n";
            cout << "Required: Rs. " << price << "\n";
        }
        else
        {
            cout << "✅ Phone is within your budget!\n";
            buyPhone();
        }
    }

    void buyPhone()
    {
        cout << "\nDo you want to buy " << phoneName << "? (yes/no): ";
        cin >> buyResponse;

        if (buyResponse == "yes" || buyResponse == "YES")
        {
            cout << "Enter quantity: ";
            cin >> quantity;

            choosePayment();
            generateBill();
        }
        else
        {
            cout << "❌ Purchase cancelled.\n";
        }
    }

    void choosePayment()
    {
        cout << "\nSelect Payment Method:\n";
        cout << "1. Cash\n";
        cout << "2. UPI\n";
        cout << "3. Credit/Debit Card\n";
        cout << "Enter choice: ";
        int p;
        cin >> p;

        switch (p)
        {
        case 1:
            paymentMode = "Cash";
            break;
        case 2:
            paymentMode = "UPI";
            break;
        case 3:
            paymentMode = "Card";
            break;
        default:
            paymentMode = "Unknown";
        }
    }

    void generateBill()
    {
        int total = price * quantity;

        cout << "\n=========== BILL ===========" << endl;
        cout << "Phone      : " << phoneName << endl;
        cout << "Price      : Rs. " << price << endl;
        cout << "Quantity   : " << quantity << endl;
        cout << "Total Cost : Rs. " << total << endl;
        cout << "Payment    : " << paymentMode << endl;
        cout << "============================" << endl;

        cout << "\n🎉 Thank you for shopping with us!\n";
    }
};

int main()
{
    PhoneStore store;
    char again;

    do
    {
        store.welcome();
        store.showMenu();
        store.selectPhone();
        store.checkBudget();

        cout << "\nDo you want to buy another phone? (y/n): ";
        cin >> again;
        cout << "\n";

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye! Visit again \n";
    return 0;
}
