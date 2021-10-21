#include <iostream>
#include "string"

int main() {

    std::string x;

    std::getline(std::cin, x);

    int i = x.find("dummy");

    if (std::string::npos != i ) {
        x.replace(i - 1 + 5, 1, "i ");
    }

    std::cout << x << std::endl;

    return 0;
}