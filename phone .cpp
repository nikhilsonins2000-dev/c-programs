#include<iostream>
using namespace std;
class phone
{
    public:
        int n;
        string response;
            void getinput()
            {
                cout<<"which phone do you like??\n";
                cout<<"1.samsung\n";
                cout<<"2.APPLE\n";
                cout<<"3.oppo\n";
                cout<<"4.vivo\n";
                cout<<"5.google pixel\n";
                cout<<"tell us your preference:";
                cin>>n;

            }
            void switchcheck()
            {
                switch(n)
                {
                    case 1:
                    cout<<"thats a great choice\n";
                    cout<<"it costs rs30000\n";
                    cout<<"do you wanna buy it??\n";
                    cin>>response;
                    break;

                    case 2:
                    cout<<"thats a perfect choice\n";
                    cout<<"it costs rs60000\n";
                    cout<<"do you wanna buy it??\n";
                    cin>>response;
                    break;

                    case 3:
                    cout<<"thats a nice choice\n";
                    cout<<"it costs rs25000\n";
                    cout<<"do you wanna buy it??\n";
                    cin>>response;
                    break;

                    case 4:
                    cout<<"thats a okay choice\n";
                    cout<<"it costs rs23000\n";
                    cout<<"do you wanna buy it??\n";
                    cin>>response;
                    break;

                    case 5:
                    cout<<"thats a fabulous choice\n";
                    cout<<"it costs rs50000\n";
                    cout<<"do you wanna buy it??\n";
                    cin>>response;
                    break;

                    default:
                    cout<<"not available at us!!";
                    break;
                }
            }
};
int main()
{
    phone newp;
    newp.getinput();
    newp.switchcheck();
    return 0;
}
