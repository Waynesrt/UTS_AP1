#include <iostream>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Masukkan angka: ";
    std::getline(std::cin, input);

    int sum = 0;
    for (char c : input) {
        if (std::isdigit(c)) {
            int digit = c - '0';
            if (isPrime(digit)) {
                sum += digit;
            }
        }
    }

    std::cout << "Output: " << sum << std::endl;

    return 0;
}