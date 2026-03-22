#include <iostream>
using namespace std;

class Check
{
public:
    int n;

    void userinput()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void checknum()
    {
        if (n % 2 == 0)
        {
            cout << n << " is an even number";
        }
        else
        {
            cout << n << " is an odd number";
        }
    }
};

int main()
{
    cout << "\n===================================================\n";
    cout << "Welcome to program to check user input is even or odd!!";
    cout << "\n===================================================\n\n";

    Check mynum;
    mynum.userinput();
    mynum.checknum();

    return 0;
}
