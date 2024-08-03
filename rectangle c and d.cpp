#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid) : length(len), width(wid) {
        cout << "Rectangle created with length: " << length << " and width: " << width << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle with length: " << length << " and width: " << width << " is destroyed." << endl;
    }

    double area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect(10.0, 5.0);
    rect.display();
    return 0;
}

