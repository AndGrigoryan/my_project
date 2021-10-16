#include "iostream"
#include "test.h"

int main() {

    char language[2];
    std::cin >> language;

     test( (int)language[0] + (int)language[1] );

    return 0;
}