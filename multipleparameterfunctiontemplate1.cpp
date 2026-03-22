#include<iostream>
using namespace std;
template <class x, class y>
int fun(x a , y b)
{
    cout<<"the value of a is :"<<a<<endl;
    cout<< "the value of b is :"<<b<<endl;
    return 0;
}
int main()
{
    fun(15,2.3);
    return 0;
}