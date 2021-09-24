#include <iostream>

int main()
{
    const int arr_length = 4;
    int arr[arr_length] = {1, 4, 2, 6};

    int start = 0, min, min_pos;

    while (start != arr_length - 1) {
        min = arr[start];
        min_pos = start;

        for (int i = start; i < arr_length; ++i) {
            if (arr[i] < min) {
                min = arr[i];
                min_pos = i;
            }
        }
        if(min_pos != start) {
            int temp = arr[start];
            arr[start] = arr[min_pos];
            arr[min_pos] = temp;
        }
        start++;
    }

    for (int i = 0; i < arr_length; ++i) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}