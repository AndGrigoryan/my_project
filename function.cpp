#include "iostream"
#include "function.h"

void working_with_the_class(Building* u) {

    std::string room = " ", method_name = " ", f_name = " ";
    int quantity, password = 1234, pas;

    while( method_name != "OFF" ) {
        std::cout << "Select find or set: (To re-select a room, enter Room or enter OFF to exit) "<< std::endl;
        std::cin >> method_name;
        if(u -> get_sec() == "off")
        {
            if(method_name == "find") {

                std::cout << "To find out the number of things in class <building>, enter the name of the element: (Enter OFF to end the search) "                                                                                                                                                  <<std::endl;
                std::cin >> f_name;

                std::cout << "Number of " << f_name << ": " << u -> get(f_name) << std::endl;
            }
            else if (method_name == "set") {

                std::cout << "To change the number of things in the <building> class, enter the name of the element: (Enter OFF to exit):  " <<std::endl;
                std::cin >> f_name >> quantity;

                u -> set(f_name, quantity);
                std::cout << "Number of " << f_name << ": " << u -> get(f_name) << std::endl;
            }
            else if(method_name == "room") {
                std::cout << "Please choose a room: (bedroom or living_room) " << std::endl;
                std::cin >> room;
                if( (room != "bedroom") && (room != "living_room") ) {
                    std::cout << "Room not found " << std::endl;
                    method_name = "OFF";
                }
            }
        }
        else {
            std::cout << "Access denied \nPlease select security password (Hint: security password 1234) " << std::endl;
            std::cin >> pas;
            if(pas == password) {
                std::cout << "Successful :)" << std::endl;
                u -> set("sec", 0);
            }
            else {
                std::cout << "Password is incorrect" << std::endl;
                method_name = "OFF";
            }
        }

    }
}