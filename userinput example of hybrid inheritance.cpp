#include<iostream>
using namespace std;
class animal
{
    public:
        string name;
        void setname(string animalname)
        {
            name=animalname;
        }
        void speak()
        {
            cout<<name<<"makes a sound"<<endl;
        }
};
class pet
{
    public:
        int age;
            void petage(int petage)
            {
                age=petage;
            }
            void showage()
            {
                cout<<"this pet is"<<age<<"years old"<<endl;
            }
};
class dog:public animal,public pet
{
    public:
        string breed;
            void setbreed(string dogbreed)
            {
                breed=dogbreed;
            }
            void showdetails()
            {
                cout<<name<<"is a "<<breed<<"and is"<<age<<"years old"<<endl;
            }
};
int main()
{
    dog mydog;
    string dogname,dogbreed;
    int petage;
    cout<<"enter dogs name:";
    cin>>dogname;

    cout<<"enter dogs breed:";
    cin>>dogbreed;

    cout<<"enter dog's age:";
    cin>>petage;

    mydog.setname(dogname);
    mydog.setbreed(dogbreed);
    mydog.petage(petage);

    mydog.speak();
    mydog.showdetails();
    mydog.showage();
    return 0;

}
