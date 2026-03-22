#include<iostream>
using namespace std;
class num
{
    protected:
        int a,b;

    public:
            void getinput()
            {
                cout<<"enter a number:";
                cin>>a;
            }
            void check()
            {
                b=a%2;
            }
};
class odd: public num
{
    public:
    void print()
    {
        if(b!=0)
        {
            cout<<"given number is odd";
        }
        else
        {
            cout<<"given number is even ";
        }
    }
};
int main()
{
    odd mynum;
    mynum.getinput();
    mynum.check();
    mynum.print();
    return 0;

}
