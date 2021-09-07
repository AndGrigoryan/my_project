#include "iostream"
#include "function_3.h"

void output_arr(int* arr, int arr_length) //Function for printing array elements
{
    for(int i = 0; i < arr_length; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}