#include <iostream>

class Cube {
public:
    Cube(int num) {
        for (int i = 1; i <= num; ++i) {
            std::cout << "Cube of " << i << " is " << (i * i * i) << std::endl;
        }
    }
};

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    
    Cube cube(n);
    
    return 0;
}

