#include<iostream>
using namespace std;
class maxfinder
{
    public:
        int num1,num2;
            void getinput()
            {
                cout<<"enter first number:";
                cin>>num1;
                cout<<"enter second number:";
                cin>>num2;

            }

};
int main()
{
    maxfinder max;
    max.getinput();
    if(max.num1>max.num2)
    {
        cout<<""<<max.num1<<" is biggest number"<<endl;
    }
    else
    {
        cout<<""<<max.num2<<" is biggest number"<<endl;
    }
    return 0;
}
