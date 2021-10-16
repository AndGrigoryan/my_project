#include <iostream>

void rec(int f_row, std::string g) {
    if(f_row > 0) {
        std::cout << g;
        for (int j = 0; j < f_row; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
        g += " ";
        rec(f_row - 1, g);
    }
}

int main() {

    int first_row = 4;
    std::string g = "";

    rec(first_row, g);
    return 0;
}