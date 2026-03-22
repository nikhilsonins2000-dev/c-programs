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
                b=a%3;
            }

            void print()
            {
                if(b==0)
                {
                    cout<<"entered number is divisble by 3";
                }
                else
                {
                    cout<<"entered number is not divisble by 3";
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
