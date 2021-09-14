#include <iostream>

void NOD(int a, int b) {
    if (a > b) {
        a -= b;
    }
    else {
        b -= a;
    }
    if(b == 0) {
        std::cout << a;
        return;
    }

    NOD(a, b);
}

int main() {

    int num1, num2;
    std::cin >> num1 >> num2;
    NOD(num1, num2);

    
    return 0;
}
