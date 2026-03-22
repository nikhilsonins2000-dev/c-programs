#include<iostream>
using namespace std;
class math
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
    double add(double a,double b,double c)
    {
        return a+b+c;
    }
};
int main()
{
    math m;
    double a,b,c;
    cout<<"enter first number:";
    cin>>a;

    cout<<"enter second number:";
    cin>>b;

    cout<<"enter third number:";
    cin>>c;

    cout<<"a+b(int):"<<m.add(a,b)<<endl;
    cout<<"a+b(double):"<<m.add(a,b)<<endl;
    cout<<"a+b+c(int):"<<m.add(a,b,c)<<endl;
    cout<<"sum of "<<a<<" and "<<b<<" is :"<<m.add(a,b)<<endl;
    cout<<"sum of double "<<a<<" and "<<b<<"is "<<m.add(a,b)<<endl;
    cout<<"sum of double "<<a<<" and "<<b<<" and "<<c<<" is:"<<m.add(a,b,c)<<endl;
    return 0;
}
