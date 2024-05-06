#include <iostream>

int main() {
    int inputSeconds;
    std::cout << "Masukkan waktu dalam detik: ";
    std::cin >> inputSeconds;

    if (inputSeconds < 0) {
        std::cout << "Input tidak valid. Waktu tidak bisa negatif." << std::endl;
        return 1;
    }

    int hours = inputSeconds / 3600;
    int minutes = (inputSeconds % 3600) / 60;
    int seconds = inputSeconds % 60;

    std::cout << "Output: ";
    if (hours < 10) std::cout << "0";
    std::cout << hours << ":";
    if (minutes < 10) std::cout << "0";
    std::cout << minutes << ":";
    if (seconds < 10) std::cout << "0";
    std::cout << seconds << std::endl;

    return 0;
}