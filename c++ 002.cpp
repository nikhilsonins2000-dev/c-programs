#include<iostream>
using namespace std;
class animal
{
    public:
        void eat()
        {
            cout<<"this animal eats food."<<endl;
        }
        void sleep()
        {
                cout<<"this animal sleeps."<<endl;
        }

};
class dog:public animal /*public animal is parameter*/
{
    public:
        void bark()
        {
                cout<<"the dog barks."<<endl;

        }

};
int main()
{
    dog mydog;                  //mydog is object
    mydog.eat();           //mydog access function eat using dot operator
    mydog.sleep();
    mydog.bark();
    return 0;
}
