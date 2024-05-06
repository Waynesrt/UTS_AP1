#include <iostream>

int main() {
    std::string input;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, input);

    for (char &c : input) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
    }

    std::cout << "Output: " << input << std::endl;

    return 0;
}