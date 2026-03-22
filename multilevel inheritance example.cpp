#include<iostream>
#include<string>
using namespace std;
class appliance
{
    protected:
        string brand;
    public:
        void setbrand()
        {
            cout<<"enter appliance brand:";
            cin>>brand;
        }
        void displaybrand()
        {
            cout<<"brand:"<<brand<<endl;

        }

};
class electricdevice
{
        public:
            int power;
            void setpower()
            {
                cout<<"enter power consumption ion watts:";
                cin>>power;
            }
            void displaypower()
            {
                cout<<"power consumption:"<<power<<"watts"<<endl;
            }
};
class washingmachine: public appliance , public electricdevice
{
    private:
        double loadcapacity;
    public:
        void setloadcapacity()
        {
            cout<<"enter the load capacity in kg:";
            cin>>loadcapacity;
        }
        void displaydetails()
        {
            displaybrand();
            displaypower();
            cout<<"load capacity:"<<loadcapacity<<"kg"<<endl;
        }
};
int main()
{
    washingmachine mywashingmachine;
    mywashingmachine.setbrand();
    mywashingmachine.setpower();
    mywashingmachine.setloadcapacity();
    cout<<"\nWASHING MACHINE DETAILS:\n";
    mywashingmachine.displaydetails();
    return 0;


};
