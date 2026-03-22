#include<iostream>
using namespace std;
class animal
{
    public:
    //virtual functipon
    virtual void speak()
    {
            cout<<"animal speaks!!"<<endl;
    }
};
class child:public animal
{
    public:
    void speak()
    {
        cout<<"data od child class."<<endl;
    }
};
int main()
{
    child cl;
    base *ptr;
    ptr=&cl;
    ptr->speak();
    return 0;

}
