#include <iostream>

enum cardinal_dirctions {
    north = 25,
    south,
    east,
    west
};

int main() {

    std::cout << "Displaying directions and their symbolic values" << std::endl;

    std::cout << "North: " << north << std::endl;
    std::cout << "South:  " << south << std::endl;
    std::cout << "East:  " << east << std::endl;
    std::cout << "West: " << west << std::endl;

    cardinal_dirctions wind_directions = south;

    std::cout << "Variable wind_direction = " << wind_directions << std::endl;

    return 0;
}