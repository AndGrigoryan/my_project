#include "function_5.h"

void swapp(int* a, int* b)
{
    int temp = *a;

    *a = *b;

    *b = temp;
}