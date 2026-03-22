#include<iostream>
using namespace std;
class a
{
    public:
        long int sum;
    void calculate(int x,int y)
    {
        sum=x+y;
        cout << "total balance: " << sum<< endl;
    }
    void calculate(long int x ,long int y,int) //without integer error
    {
        sum= x - y;
      cout << "total balance: " << sum << endl;   
    }
};
int main()
{
    a user;
    long int balance;
    long int amount;
    char c;
    cout<<"enter your bank balance:";
    cin>>balance;
    cout<<"do you wanna deposit or withdraw??(d/w):";
    cin>>c;
    if(c=='d')
    {
        cout<<"enter amount to deposit:";
        cin>>amount;
        user.calculate(balance,amount);
    }
    else if(c=='w')
    {
        cout<<"enter amount to withdraw:";
        cin>>amount;
        user.calculate(balance,amount,0);
    }
    //user.calculate(x);
    return 0;

}
