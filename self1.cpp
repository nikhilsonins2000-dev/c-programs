#include <iostream>
using namespace std;


class Shape
{
public:
    virtual void calculateArea() = 0;
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
    void calculateArea() override {
        double area = length * width;
        cout << "Rectangle Area: " << area << endl;
    }
};

int main()
{
    Shape s;

    Rectangle rect(10.0, 5.0);

    rect.display();
    rect.calculateArea();

    return 0;
}
