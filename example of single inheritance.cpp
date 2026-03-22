#include<iostream>
using namespace std;
class check
{
    public:
        int n;
            void getinput()
            {
                cout<<"enter a number:";
                cin>>n;
            }
};
class number: public check
{
    public:
        void checnum()
        {
            if(n%2==0)
            {
                cout<<""<<n<<" is even number"<<endl;
            }
            else
            {
                 cout<<""<<n<<" is odd number"<<endl;
            }
        }
};
int main()
{
    number num;
    num.getinput();
    num.checnum();
    return 0;
}
