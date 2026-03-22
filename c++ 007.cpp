#include<iostream>
using namespace std;
class number
{
    public:
            int a;
            void getinput()
            {
                cout<<"enter a number:";
                cin>>a;
            }

            void checknumber()
            {
                if(0>a)
                {
                    cout<<"given number is negative";
                }
                else
                {
                    cout<<"given number is not negative";
                }
            }
};

int main()
{
    number mynum;
    mynum.getinput();
    mynum.checknumber();
    return 0;

}
