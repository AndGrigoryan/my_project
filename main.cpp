#include <iostream>

int main() {
    int n = 4;
    char c[n];

    std::cin >> c;

    if (c[sizeof(c) - 1] == "\0" ) {
        std::cout << '+';
    }

    return 0;
}
