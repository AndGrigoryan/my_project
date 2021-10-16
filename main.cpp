#include <iostream>

void rec(int f_row, std::string num_sp) {
    if(f_row > 0) {
        std::cout << num_sp;
        for (int j = 0; j < f_row; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
        num_sp += " ";
        rec(f_row - 1, num_sp);
    }
}

int main() {

    int first_row = 4;
    std::string number_spaces = "";

    rec(first_row, number_spaces);
    return 0;
}