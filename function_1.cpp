#include "iostream"
#include "function_1.h"

void function_1(int start, int end)
{
    for(; start <= end; start++)
    {
        std::cout << start << " ";
    }

    std::cout << std::endl;
}