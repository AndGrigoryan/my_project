#include <iostream>
#include <cstdlib>
#include <ctime>

void multiplication() {
    int num1, num2, answer;

    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;

    std::cout << num1 << " * " << num2 << " = ";
    std::cin >> answer;
    if (answer == -1) {
        return;
    }
    else if(num1 * num2 == answer) {
        std::cout << "Yes!" << std::endl;
        multiplication();
    }
    else {
        std::cout << "Please try again" << std::endl;
        multiplication();
    }

}

int main() {


    srand(time(NULL));

    multiplication();

    return 0;
}
