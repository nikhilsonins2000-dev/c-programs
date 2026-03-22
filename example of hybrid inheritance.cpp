#include<iostream>
using namespace std;
class animal
{
    public:

        void speak()
        {
            cout<<"animal speaks!!"<<endl;
        }

};
class dog:public animal
{
    public:
        void bark()
        {
            cout<<"dog barks!!"<<endl;
        }
};
class pet
{
    public:
        void showaffection()
        {
            cout<<"pet show affection!!"<<endl;
        }
};
class labrador:public dog,public pet
{
    public:
        void color()
        {
            cout<<"labrador is brown"<<endl;
        }
};
int main()
{
    labrador lab;
    lab.speak();
    lab.bark();
    lab.showaffection();
    lab.color();
    return 0;
}
