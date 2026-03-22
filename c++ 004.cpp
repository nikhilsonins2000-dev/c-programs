#include<iostream>
using namespace std;
class bankaccount
{
    private:
        double balance;
    public:
        bankaccount(double initial_balance)
        {
            if(initial_balance>=0)
            {
                balance=initial_balance;
            }
            else
            {
                balance=0;
            }
        }
        void deposit(double amount)
        {
            if(amount>0)
            {
                balance +=amount;
                cout<<"deposited amount:"<<amount<<endl;
            }
            else
            {
                cout<<"deposited amount must be positive!!"<<endl;
            }

        }
        void withdraw(double amount)
        {
            if(amount>0 && amount<=balance)
            {
                balance -=amount;
                cout<<"withdrawn amount:"<<amount<<endl;
            }
            else
            {
                cout<<"insufficient funds or enter a valid amount"<<endl;
            }

        }
        void displaybalance()
        {

            cout<<"current balance:"<<balance<<endl;
        }
}; //end of main class
int main()
{
    bankaccount account(100000);
    account.displaybalance();
    account.deposit(50000);
    account.displaybalance();
    account.withdraw(30000);
    account.displaybalance();
    //attempt to withdraw more than available balance
    account.withdraw(15000);
    account.displaybalance();
    return 0;
}
