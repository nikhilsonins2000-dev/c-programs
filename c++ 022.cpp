#include<iostream>
using namespace std;
class range
{
    public:
         int a;
            void getinput()
            {
                cout<<"enter a number:";
                cin>>a;
            }
            void print()
            {
                if(a<=40 && a>10)
                {
                    cout<<"entered number is within range.";
                }
                else
                {
                    cout<<"entered number is not within range. ";
                }
            }
};
int main()
{
    range check;
    check.getinput();
    check.print();
    return 0;
}
