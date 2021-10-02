#include "show_struct.h"

int main() {

    
    User user1;

    user1.name = "Carl";
    user1.surname = "Johnson";
    user1.age = 39;
    user1.dogs[0].name = "Tuzik";
    user1.dogs[0].age = 3;
    user1.dogs[1].name = "Lynda";
    user1.dogs[1].age = 1;

    show_struct(&user1);

    return 0;
}
