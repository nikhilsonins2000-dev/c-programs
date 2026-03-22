#include<iostream>
using namespace std;
class balance
{
    public:
    //int amount;
    long int amount1;

        void getinput()
        {
            cout<<"enter your bank balance:";
            cin>>amount1;
           // return 0;
        }
};
class person:public balance
{
   public:
   
    void printinput()
    {
        cout<<"your bank balance :"<<amount1;
        //return 0;
    }
     void pritinput()
    {
        cout<<"your bank balance :"<<amount1;
        //return 0;
    }
};
int main()
{
    person bank;

    bank.getinput();
    if(bank.amount1>0 && bank.amount1<=9999)
   {
        bank.printinput();
   }
    else if(bank.amount1>10000 && bank.amount1<=100000)
   {
        bank.pritinput();
   }
    return 0;
}