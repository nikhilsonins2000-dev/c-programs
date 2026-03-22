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
                if(age>=65)
                {
                    cout<<"you are a senior citizen";
                }
                else
                {
                    cout<<"you aren't a senior citizen";
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
