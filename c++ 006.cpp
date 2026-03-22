#include<iostream>
using namespace std;
class number
{
    public:
        int a;
            void userinput()
            {

                cout<<"enter a number:";
                cin>>a;
            }
            void checknumber()
            {
                if(a>0)
                {
                    cout<<"given number is positive. ";
                }
                else
                {
                    cout<<"given number is not positive";
                }
            }

};
int main()
{
    number num;
    num.userinput();
    num.checknumber();
    return 0;


}
