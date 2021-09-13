#include <iostream>

int main() {

    int num1;
    bool b = true;
    std::cin >> num1;

    for(int i = 1; i <= 9; i++) {

        int copy_num1 = num1 * 10 + i;
        int temp = copy_num1;
        int num2 = 0;

        while(temp != 0) {
            num2 = num2 * 10 + temp % 10;
            temp /= 10;
        }

        if(copy_num1 == num2) {
            std::cout << "Yes!" << " i = " << i << std::endl;
            b = false;
            break;
        }

    }

    if( b == true) {
        std::cout << "No!" << std::endl;
    }

    return 0;
}
