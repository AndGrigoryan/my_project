#include <iostream>

int main() {

    int num1, num2;
    char operation;
    bool power = true;

    while( power  ) {
        std::cin >> num1 >> operation >> num2;

        switch (operation) {
            case '+':
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;
            case '-':
                    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                    break;
            case '*':
                    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                    break;
            case '/':
                    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                    break;
            default :
                std::cout << "Invalid symbol";
                break;
        }
        std::cout << "If you want to count a number again, write 1, otherwise write 0:";
        std::cin >> power;
    }

    return 0;
}
