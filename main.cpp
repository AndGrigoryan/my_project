#include "user_struct.h"
#include "show_struct.h"

int main() {

    User john;
    john.age = 21;
    john.height = 192;
    john.bac.age = 3;
    john.bac.height = 100;

    show_struct(&john);

    return 0;
}