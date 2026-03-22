#include<iostream>
using namespace std;
class person
{
    public:
        int age;
            void askage()
            {
                cout<<"what is your age:";
                cin>>age;

            }

            void check()
            {
                if(age>=18)
                {
                    cout<<"you can drive ";
                }
                else
                {
                    cout<<"you aren't allowed to drive";
                }
            }
};






int main()
{
    person hisage;
    hisage.askage();
    hisage.check();
    return 0;
}
