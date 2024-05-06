#include <iostream>
#include <cmath>

int main() {
    system("CLS");

    int n;
    std::cout << "Insert a number: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << n << " bukanlah bilangan prima." << std::endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i <= std::sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << n << " merupakan bilangan prima." << std::endl;
        } else {
            std::cout << n << " bukanlah bilangan prima." << std::endl;
        }
    }

    return 0;
}