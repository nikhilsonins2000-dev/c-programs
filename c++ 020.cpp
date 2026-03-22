#include<iostream>
using namespace std;
class discount
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
                if(a<=23 && a>10)
                {
                    cout<<"you are eligible to get discount.";
                }
                else
                {
                    cout<<"you are't eligible to get dicount. ";
                }
            }
};
int main()
{
    discount check;
    check.getinput();
    check.print();
    return 0;
}
