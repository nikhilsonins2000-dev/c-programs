#include<iostream>
using namespace std;
class loan
{
    public:
        long int a,b;
            void getinput()
            {
                cout<<"enter your age:";
                cin>>a;

                cout<<"enter your bank balance:";
                cin>>b;
            }
            void print()
            {
                if(a>21 && b>=30000)
                {
                    cout<<"you are eligible to get a loan";
                }
                else
                {
                    cout<<"you are't eligible to get a loan ";
                }
            }
};
int main()
{
    loan check;
    check.getinput();
    check.print();
    return 0;
}
