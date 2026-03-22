#include<iostream>
using namespace std;
class animal
{
    public:
        void eat()
        {
            cout<<"this animal eats food"<<endl;
        }
        void sleep()
        {
            cout<<"this animal sleeps"<<endl;
        }

};
class dog:public animal
{
    public:
        void bark()
        {
            cout<<"this dog barks woof woof"<<endl;
        }
};
class cat:public animal
{
    public:
        void meow()
        {
            cout<<"the cat meows:MEOWS MEOWS!!"<<endl;
        }
};
int main()
{
    dog mydog;
    cat mycat;
    cout<<"dog's behavior:"<<endl;
    mydog.eat();
    mydog.sleep();
    mydog.bark();
    cout<<"cats's behavior:"<<endl;
    mycat.eat();
    mycat.sleep();
    mycat.meow();
}
