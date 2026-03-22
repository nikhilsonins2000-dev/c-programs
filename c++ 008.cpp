#include<iostream>
using namespace std;
class num
{
    public:
        int a;
            void getinput()
            {
                cout<<"enter a number:";
                cin>>a;

            }

            void check()
            {
                if(a==0)
                {
                    cout<<"entered number is zero";
                }
                else
                {
                    cout<<"entered number is not zero";
                }
            }


};


int main()
{
    num number;
    number.getinput();
    number.check();
    return 0;

}
