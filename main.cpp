#include "iostream"

void test (int *n1, int *n2, char *t) {

    switch(*t) {
        case '+':
            std::cout << *n1 << " + " << *n2 << " = " << *n1 + *n2;
            break;
        case '-':
            std::cout << *n1 << " - " << *n2 << " = " << *n1 - *n2;
            break;
        case '/':
            std::cout << *n1 << " / " << *n2 << " = " << *n1 / *n2;
            break;
        case '*':
            std::cout << *n1 << " * " << *n2 << " = " << *n1 * *n2;
            break;
        default:
            std::cout << "Invalid symbol\n";
            break;
    }

}

void init_params(int *n1, int *n2, char *t) {

    std::cout << "num1:";
    std::cin >> *n1 ;

    std::cout << "num2:";
    std::cin >> *n2;

    std::cout << "Type:";
    std::cin >> *t;

}

int main() {
    int num1, num2;
    char type;

    init_params(&num1, &num2, &type);

    test(&num1, &num2, &type);

    return 0;
}
