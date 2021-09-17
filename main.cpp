#include <iostream>
#include <conio.h>

int main()
{
    const int arr_length = 4;
    int arr[arr_length] = {1, 4, 2, 6};

    for (int i = 0; i < arr_length - 1; ++i) {
        for (int y = i + 1; y < arr_length; ++y) {
            if(arr[i] > arr[y]) {
               int temp = arr[i];
               arr[i] = arr[y];
               arr[y] = temp;
            }
        }
    }

    for (int i = 0; i < arr_length; ++i) {
        std::cout << arr[i] << ' ';
    }


    return 0;
}