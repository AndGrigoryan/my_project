#include <iostream>

int main() {

    int first_row = 4;
    std::string g = "";
    for (int i = first_row; i > 0; i--) {
        std::cout << g;
        for (int j = 0; j < i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
        g += " ";
    }

    return 0;
}