#include "iostream"
#include "struct.h"
#include "function.h"
#include "class.h"

int main() {

    std::string room = " ";

    Building bedroom(1, 3, 2, 3, "blue", 1);       // Created an object named bedroom
    Building living_room(2, 7, 0, 3, "white", 2);  // Created an object named living_room
    bedroom.select_width_length(4, 5);
    living_room.select_width_length(5, 7);

    std::cout << "Please choose a room: (bedroom or living_room) " << std::endl;
    std::cin >> room;

    if(room == "bedroom") {
        working_with_the_class(&bedroom);
    }
    else if (room == "living_room") {
        working_with_the_class(&living_room);
    }

    return 0;
}