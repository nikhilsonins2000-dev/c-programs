#include<iostream>
using namespace std;
class grades
{
    public:
        int a,b,c,d;
            void askmarks()
            {
                cout<<"tell your  science marks(out of 50):";
                cin>>a;
                cout<<"tell your maths marks(out of 50):";
                cin>>b;
                cout<<"tell your literature marks(out of 50):";
                cin>>c;
            }

            void calculate()
            {
                d=a+b+c;
            }
            void check()
            {
                if(d>130)
                {
                    cout<<"you have really good marks";
                }
                else if(d>100)
                {
                    cout<<"you have good marks";
                }
                else if(d>70)
                {
                    cout<<"you have okay marks";
                }
                else if(d>50)
                {
                    cout<<"you have passing marks";
                }
                else
                {
                    cout<<"you are failed !! try again next time";
                }
            }
};






int main()
{
    grades grade;
    grade.askmarks();
    grade.calculate();
    grade.check();
    return 0;
}
