#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;

    void setData(string b, int p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car c1, c2;
    c1.setData("Toyota", 20000);
    c2.setData("Honda", 18000);
    c1.display();
    c2.display();
}
