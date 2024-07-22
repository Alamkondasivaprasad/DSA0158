#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    double average;

    // Reading three integers from the user
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter third integer: ";
    cin >> num3;

    // Calculating the average
    average = (num1 + num2 + num3) / 3.0;

    // Displaying the average
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << average << endl;

    return 0;
}

