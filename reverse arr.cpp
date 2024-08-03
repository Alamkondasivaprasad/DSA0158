#include <iostream>
#include <algorithm>

void reverseArray(int arr[], int size) {
    std::reverse(arr, arr + size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    reverseArray(arr, size);
    
    std::cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
