#include "iostream"
#include "function_2.h"

void input_array(int* arr, int arr_length) //Function for entering elements in an array
{
    for(int i = 0; i < arr_length; i++)
    {
        std::cin >> arr[i];
    }
}