#include <iostream>

void rec(int start, int end) {
    if ( start <= end ) {
        if (start % 2 == 0) {
            std::cout << start << ' ';
            start += 2;
            rec(start, end);
        } else {
            rec(++start, end);
        }
    }
}

int main() {

    int num1, num2;

    std::cin >> num1 >> num2;

    if(num1 < num2) {
        rec(num1, num2);
    } else {
        rec(num2, num1);
    }

    return 0;
}