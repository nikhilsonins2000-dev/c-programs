#include<iostream>
using namespace std;

class bankaccount
{
    private:
        double balance;
    public:
        bankaccount(double initial_balance)
        {
            if(initial_balance >= 0)
            {
                balance = initial_balance;
            }
            else
            {
                balance = 0;
            }
        }
        void deposit(double amount)
        {
            if(amount > 0)
            {
                balance += amount;
                cout << "Deposited amount: " << amount << endl;
            }
            else
            {
                cout << "Deposited amount must be positive!!" << endl;
            }
        }
        void withdraw(double amount)
        {
            if(amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn amount: " << amount << endl;
            }
            else
            {
                cout << "Insufficient funds or enter a valid amount" << endl;
            }
        }
        void displaybalance()
        {
            cout << "Current balance: " << balance << endl;
        }
};

int main()
{
    double initBal, depAmt, withAmt;

    // 1. Get Initial Balance
    cout << "Enter initial balance to open account: ";
    cin >> initBal;
    bankaccount account(initBal);
    account.displaybalance();

    // 2. Get Deposit Amount
    cout << "\nEnter amount to deposit: ";
    cin >> depAmt;
    account.deposit(depAmt);
    account.displaybalance();

    // 3. Get Withdrawal Amount
    cout << "\nEnter amount to withdraw: ";
    cin >> withAmt;
    account.withdraw(withAmt);
    account.displaybalance();

    return 0;
}
