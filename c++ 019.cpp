#include<iostream>
using namespace std;
class teen
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
                if(a>=13 && a<=19)
                {
                    cout<<"you are a teen";
                }
                else
                {
                    cout<<"you are't a teen ";
                }
            }
};
int main()
{
    teen check;
    check.getinput();
    check.print();
    return 0;
}
