#include <iostream>
using namespace std;

// Overloaded functions to print arrays
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void printArray(double arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void printArray(char arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int intArr[5] = {1, 2, 3, 4, 5};
    double doubleArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[5] = {'a', 'j', 'c', 'd', 'e'};

    cout << "Integer Array: ";
    printArray(intArr, 5);

    cout << "Double Array: ";
    printArray(doubleArr, 5);

    cout << "Character Array: ";
    printArray(charArr, 5);

    return 0;
}

