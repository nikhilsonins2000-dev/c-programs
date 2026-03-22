#include<iostream>
using namespace std;
class check
{
    public:
        int a,b;
            void getinput()
            {
                cout<<"enter a number:";
                cin>>a;
            }

            void calculate()
            {
                b=a%5;
            }

            void print()
            {
                if(b==0)
                {
                    cout<<"entered number is divisble by 5";
                }
                else
                {
                    cout<<"entered number is not divisble by 5";
                }
            }
};




int main()
{
    check mynum;
    mynum.getinput();
    mynum.calculate();
    mynum.print();
    return 0;
}
