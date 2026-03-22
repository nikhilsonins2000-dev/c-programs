#include<iostream>
using namespace std;
template<class x>   int fun(x a)
{
    cout<<"the value of a is:"<<a<<endl;
    return 0;
}
template <class x , class y>    int fun(x b , y c)
{
    cout<<"the value of b is:"<<b<<endl;
    cout<<"the value of c is:"<<c<<endl;
    return 0;
}
int main()
{
    fun(10);
    fun(20 , 30.5);
    return 0;
}