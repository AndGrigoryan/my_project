#include <iostream>

int main() {

    int n;
    std::cin >> n;
    if (n >= 3 && n <= 5) {
        std::cout << "Spring";
    }
    else if (n >= 6 && n <= 8) {
        std::cout << "Summer";
    }
    else if (n >= 9 && n <= 11) {
        std::cout << "Autumn";
    }
    else {
        std::cout << "Winter";
    }

    return 0;
}
