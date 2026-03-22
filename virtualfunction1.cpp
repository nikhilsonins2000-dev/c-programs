#include <iostream>
using namespace std;

class Bank
{
public:
    virtual void interest()
    {
        cout << "Bank interest rate is basic." << endl;
    }
};

class SBI : public Bank
{
public:
    void interest()
    {
        cout << "SBI interest rate is 6.5%" << endl;
    }
};

class HDFC : public Bank
{
public:
    void interest()
    {
        cout << "HDFC interest rate is 7.2%" << endl;
    }
};

int main()
{
    Bank *b;
    SBI s;
    HDFC h;

    b = &s;
    b->interest();   

    b = &h;
    b->interest();   

    return 0;
}
