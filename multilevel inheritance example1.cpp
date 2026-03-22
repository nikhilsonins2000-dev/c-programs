#include<iostream>
#include<string>
using namespace std;
class person
{
    protected:
        string name;
        int age;
    public:
        void setpersondetails()
        {
            cout<<"enter name:";
            cin>>name;

            cout<<"enter age:";
            cin>>age;


        }
        void displaypersondetails()
        {
            cout<<"name:"<<name<<endl;
            cout<<"age:"<<age<<endl;
        }


};
class employee: public person
{
    protected:
        int employeeid;
    public:
        void setemployeedetails()
        {
            cout<<"enter employee details:";
            cin>>employeeid;
        }
        void displayemployeedetails()
        {
            cout<<"employee id:"<<employeeid<<endl;
        }

};
class manager: public employee
{
    private:
        int teamsize;
    public:
        string manname;
        int years;
        void setmanagerdetails()
        {
            cout<<"enter team size:";
            cin>>teamsize;

            cout<<"what is your name:";
            cin>>manname;

            cout<<"how many years experience you have:";
            cin>>years;
        }
        void displaydetails()
        {
            displaypersondetails();
            displayemployeedetails();
            cout<<"manager's name:"<<manname<<endl;
            cout<<"his experience is "<<years<<" years"<<endl;
            cout<<"his team has "<<teamsize<<" members"<<endl;
        }
};
int main()
{
    manager man;
    man.setpersondetails();
    man.setemployeedetails();
    man.setmanagerdetails();
    cout<<"\n======================================\n";
    cout<<"COMPANY DETAILS!!!";
    cout<<"\n======================================\n";
    man.displaydetails();
    return 0;

}
