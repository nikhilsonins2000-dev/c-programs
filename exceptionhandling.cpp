#include<iostream>
#include<conio.h>
#include<stdexcept>
using namespace std;
int main()
{
    double numerator,denominator,divide;
    cout<<"enter numerator:";
    cin>>numerator;

    cout<<"enter denominator";
    cin>>denominator;

    try{
        //throw an exception handling if denominator is 0

        if(denominator==0)
            throw 0;
        //to go to catch if denominator is 0

        divide = numerator/denominator;
        cout<<numerator<<"/"<<denominator<<"= "<<divide<<endl;
    }
    catch(int num_exception)
    {
        cout<<"error can not divide by "<<num_exception<<endl;
    }
    return 0;
}