#include<iostream>
using namespace std;
class drink
{
    public:
        long int a;
            void getinput()
            {
                cout<<"enter your age:";
                cin>>a;
            }
            void print()
            {
                if(a>18)
                {
                    cout<<"you are eligible to buy alcohol";
                }
                else
                {
                    cout<<"you are't eligible to buy alcohol ";
                }
            }
};
int main()
{
    drink check;
    check.getinput();
    check.print();
    return 0;
}
