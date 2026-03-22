#include<iostream>
using namespace std;
class animal
{
    public:
        void eat()
        {
                cout<<"this animal eats"<<endl;
        }
        void sleep()
        {
                cout<<"this animal sleeps"<<endl;
        }
};
class dog:public animal
{
    private:
        string name;
        int age;
    public:
        void setdetails()
        {
                cout<<"enter dog's name:";
                cin>>name;

                cout<<"enter dog's age:";
                cin>>age;

        }

        void displaydetails()
        {
                cout<<"dog's name is "<<name<<endl;
                cout<<"dog is "<<age<<"years old."<<endl;
        }

        void bark()     //method
        {
            cout<<"the dog barks!!"<<endl;
        }
};
int main()
{
    dog mydog;
    mydog.setdetails();
    mydog.displaydetails();
    mydog.eat();
    mydog.sleep();
    mydog.bark();
    return 0;


}
