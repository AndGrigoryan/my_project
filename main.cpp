#include <iostream>

int arr[9] = {5, 2, 7, 2, 13, 3, 8, 15, 19};

void quicksort(int high, int low) {
    int j = high;
    int i = low;
    int p = arr[(high + low) / 2];

    do {
        while (arr[i] < p) {
            i++;
        }
        while(arr[j] > p) {
            j--;
        }

        if(i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);

    if(j > low) {
        quicksort(j, low);
    }
    if (high > i) {
        quicksort(high, i);
    }




}

int main() {

    const int arr_length = 9;

    quicksort(arr_length - 1, 0);

    for (int i = 0; i < arr_length; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}