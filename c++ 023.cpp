#include<iostream>
#include<math.h>
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
                b=sqrt(a);  //to get square of number
            }

            void print()
            {
                if(b*b==a)  //to check if it is a integer number
                {
                    cout<<"entered number is perfect square";
                }
                else
                {
                    cout<<"entered number is not a perfect square";
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
