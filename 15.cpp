#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // pure virtual function
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) { radius = r; }
    void area() { cout << "Area of Circle: " << 3.14 * radius * radius << endl; }
};

class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) { length = l; breadth = b; }
    void area() { cout << "Area of Rectangle: " << length * breadth << endl; }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    c.area();
    r.area();
}
