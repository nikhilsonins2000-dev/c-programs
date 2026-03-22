#include<iostream>
using namespace std;
class vehicle
{
    public:     //base class 1
        void start()
        {
            cout<<"vehicle started"<<endl;
        }
        void stop()
        {
            cout<<"vehicle stopped"<<endl;
        }
};
class soundsystem           //base class 2
{
    public:
    void playmusic()
    {
        cout<<"playing music"<<endl;
    }
    void stopmusic()
    {
        cout<<"music stopped"<<endl;
    }
};
class car : public vehicle,public soundsystem   //child class
{
    public:
        void honk()
        {
            cout<<"car honks:beep beep"<<endl;
        }

};
int main()
{
    car mycar; //mycar is object
    mycar.start();
    mycar.honk();
    mycar.stop();
    mycar.playmusic();
    mycar.stopmusic();
    return 0;
}
