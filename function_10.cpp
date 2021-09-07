#include "function_10.h"
#include "iostream"

void triangle()
{
        int i = 1, b = 0, counter = 0;

        while(i < 5)
        {
            counter++;
            while(b < 3)
            {
                std::cout << " ";
                b++;
            }

            b = counter;

            int j = 0;

            while(j < i)
            {
                std::cout << "* ";
                j++;
            }
            std::cout << std::endl;
            i++;
        }
}