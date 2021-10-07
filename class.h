#pragma once
#include "struct.h"

class Floor_plan {
public:
    int width, length;

    void select_width_length(int w, int l) {
        this -> width = w;
        this -> length = l;
    }
};


class Building : public Floor_plan {

    Interior intern;
    std::string wall_color;
    std::string security = "On";
public:
    Building(int tables, int chairs, int beds, int sockets, std::string w_color, int windows) {
        this -> intern.number_of_tables = tables;
        this -> intern.number_of_chairs = chairs;
        this -> intern.number_of_beds = beds;
        this -> intern.number_of_sockets = sockets;
        this -> wall_color = w_color;
        this -> intern.number_of_windows = windows;
    };
    int get(std::string s) {
        if(s == "table") {
            return this -> intern.number_of_tables;
        }
        if(s == "chair") {
            return this -> intern.number_of_chairs;
        }
        if(s == "bed") {
            return this -> intern.number_of_beds;
        }
        if(s == "socket") {
            return this -> intern.number_of_sockets;
        }
        if(s == "windows") {
            return this -> intern.number_of_sockets;
        }
        if(s == "width") {
            return this -> width;
        }
        if(s == "length") {
            return this -> length;
        }
        if(s == "OFF")
        {
            return 0;
        }
        std::cout << "ERROR" << std::endl;
        return 0;
    }

    std::string get_sec () {
        return this -> security;
    }

    void set(std::string s, int num) {
        if(s == "table") {
            this -> intern.number_of_tables = num;
        }
        else if(s == "chair") {
            this -> intern.number_of_chairs = num;
        }
        else if(s == "bed") {
            this -> intern.number_of_beds = num;
        }
        else if(s == "socket") {
            this -> intern.number_of_sockets = num;
        }
        else if(s == "windows") {
            this -> intern.number_of_sockets = num;
        }
        else if(s == "width") {
            this -> width = num;
        }
        else if(s == "length") {
            this -> length = num;
        }
        else if (s == "sec") {
            if(num == 1) {
                this -> security = "on";
            }
            else if (num == 0) {
                this -> security = "off";
            }
        }
        else {
            std::cout << "Parameter not found";
        }
    }

    ~Building() {                           // destructor
        std::cout << "End." << std::endl;
    }
};