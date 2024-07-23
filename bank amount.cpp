#include <iostream>

class AddAmount {
protected:
    int amount;
public:
    AddAmount() : amount(50) {}
    void displayAmount() const {
        std::cout << "Total Amount is = $" << amount << std::endl;
    }
};

class NoAddAmount : public AddAmount {
public:
    NoAddAmount() : AddAmount() {}
};

class AddSomeAmount : public AddAmount {
public:
    AddSomeAmount(int extraAmount) : AddAmount() {
        amount += extraAmount;
    }
};

int main() {
    int extraAmount;
    std::cout << "Enter the amount to be added: ";
    std::cin >> extraAmount;
    AddSomeAmount piggyBank(extraAmount);
    piggyBank.displayAmount();

    return 0;
}

