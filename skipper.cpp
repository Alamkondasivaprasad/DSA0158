#include <iostream>

class Number {
protected:
    int M, N, K;

public:
    void getdata() {
        std::cout << "Enter the starting number (M): ";
        std::cin >> M;
        std::cout << "Enter the ending number (N): ";
        std::cin >> N;
        std::cout << "Enter the number to skip (K): ";
        std::cin >> K;
    }
};

class Skipper : public Number {
public:
    void printSkippedNumbers() {
        for (int i = M; i <= N; i += K + 1) {
            std::cout << i;
            if (i + K + 1 <= N) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    Skipper skipper;
    skipper.getdata();
    std::cout << "Numbers from " << skipper.M << " to " << skipper.N << " skipping " << skipper.K << " numbers in between: ";
    skipper.printSkippedNumbers();

    return 0;
}

