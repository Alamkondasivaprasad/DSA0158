#include <iostream>
using namespace std;
class Shape {
public:
    virtual void getdata() = 0;
    virtual void displaydata() = 0;
};

class Rectangle : public Shape {
protected:
    double length;
    double breadth;

public:
    void getdata() override {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void displaydata() override {
        cout << "Length = " << length << std::endl;
        cout << "Breadth = " << breadth << std::endl;
    }

    double area() {
        return length * breadth;
    }
};

class Cuboid : public Rectangle {
private:
    double height;

public:
    void getdata() override {
        Rectangle::getdata();
        cout << "Enter height: ";
        cin >> height;
    }

    void displaydata() override {
        Rectangle::displaydata();
        cout << "Height = " << height << endl;
    }

    double volume() {
        return length * breadth * height;
    }
};

int main() {
    Cuboid cuboid;

    cuboid.getdata();
    cuboid.displaydata();
    cout << "Area of Rectangle = " << cuboid.area() << endl;
    cout << "Volume of Cuboid = " << cuboid.volume() << endl;

    return 0;
}

