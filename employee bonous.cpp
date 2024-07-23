#include <iostream>
using namespace std;

class Person {
public:
    virtual void getdata() = 0;
    virtual void displaydata() = 0;
    virtual double bonus() = 0;
};

class Admin : virtual public Person {
protected:
    double salary;
public:
    void getdata() override {
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void displaydata() override {
        cout << "Admin Salary = " << salary << endl;
    }

    double bonus() override {
        return salary * 0.02;  // 2% bonus
    }
};

class Account : virtual public Person {
protected:
    double salary;
public:
    void getdata() override {
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void displaydata() override {
        cout << "Account Salary = " << salary << endl;
    }

    double bonus() override {
        return salary * 0.02;  // 2% bonus
    }
};

class Master : public Admin, public Account {
public:
    void getdata() override {
        cout << "Enter the salary: ";
        cin >> salary;  // Assuming same salary for Admin and Account roles
    }

    void displaydata() override {
        cout << "Master Salary = " << salary << endl;
    }

    double bonus() override {
        return salary * 0.02;  // 2% bonus
    }
};

int main() {
    Person* emp;
    Master m;
    emp = &m;
    
    emp->getdata();
    emp->displaydata();
    cout << "Bonus = " << emp->bonus() << endl;

    return 0;
}

