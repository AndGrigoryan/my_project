#include <iostream>

int main() {

    int a, b, range_length = 0;
    double average = 0.0;

    std::cin >> a >> b;

    range_length = b- a + 1;

    for(; a <= b; a++) {
        average += a;
    }

    average /= range_length;

    std::cout << "The arithmetic average: " << average;

    return 0;
}
