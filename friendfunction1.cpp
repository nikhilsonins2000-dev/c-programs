#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    int age;
    double salary;

public:
    Employee(int id, string n, int a, double s)
    {
        empId = id;
        name = n;
        age = a;
        salary = s;
    }

    // friend function declaration
    friend void showDetails(Employee e);
};
void showDetails(Employee e)
{
    cout << "Employee ID: " << e.empId << endl;
    cout << "Name: " << e.name << endl;
    cout << "Age: " << e.age << endl;
    cout << "Salary: " << e.salary << endl;
}

int main()
{
    Employee e1(101, "Rahul", 25, 35000);

    showDetails(e1);

    return 0;
}
