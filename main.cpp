#include <iostream>
#include "f1.h"
#include "f2.h"
#include "f3.h"
#include "f4.h"

int main() {

    int num1, num2;

    std::cin >> num1 >> num2;

    std::cout << " num1 + num2 = " << sum(num1, num2) << std::endl;
    std::cout << " num1 - num2 = " << sub(num1, num2) << std::endl;
    std::cout << " num1 * num2 = " << multiple(num1, num2) << std::endl;
    std::cout << " num1 / num2 = " << division(num1, num2) << std::endl;

    return 0;
}