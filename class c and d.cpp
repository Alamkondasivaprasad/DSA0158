#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Constructor
    Student(string n, int r) : name(n), rollNumber(r) {
        cout << "Student created: Name - " << name << ", Roll Number - " << rollNumber << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student with name: " << name << " and roll number: " << rollNumber << " is destroyed." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student("John Doe", 123);
    student.display();
    return 0;
}

