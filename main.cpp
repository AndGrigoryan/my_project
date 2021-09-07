#include <iostream>
#include "function_1.h"
#include "function_2.h"
#include "function_3.h"
#include "function_4.h"
#include "function_5.h"
#include "function_6.h"
#include "function_7.h"
#include "function_8.h"
#include "function_9.h"
#include "function_10.h"

int main() {

    int arr[4];

    int a = 0, b = 0;

    function_1(12, 21);

    input_array(arr, 4);

    output_arr(arr, 4);

    std::cout << "Factorial of number 9 = " << fact(9) << std::endl;

    std::cout << "a =";
    std::cin >> a;
    std::cout << "b =";
    std::cin >> b;

    swapp(&a, &b);

    std::cout << "a = " << a << "  b = " << b << std::endl;

    std::cout << a << " + " << b << " = " << sum(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << sub(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << prod(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << division(a, b) << std::endl;

    triangle();



    return 0;
}
