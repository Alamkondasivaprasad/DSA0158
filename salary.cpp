#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int salary;

    void getdata() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void displaydata() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }

    virtual int bonus() {
        return salary + 1000;
    }
};

class Admin : virtual public Person {
public:
    void getdata() {
        Person::getdata();
    }

    void displaydata() {
        Person::displaydata();
    }

    int bonus() override {
        return Person::bonus();
    }
};

class Account : virtual public Person {
public:
    void getdata() {
        Person::getdata();
    }

    void displaydata() {
        Person::displaydata();
    }

    int bonus() override {
        return Person::bonus();
    }
};

class Master : public Admin, public Account {
public:
    void getdata() {
        Admin::getdata();
    }

    void displaydata() {
        Admin::displaydata();
    }

    int bonus() override {
        return Admin::bonus();
    }
};

int main() {
    Master employee;

    employee.getdata();
    employee.displaydata();
    std::cout << "Bonus = " << employee.bonus() << std::endl;

    return 0;
}

