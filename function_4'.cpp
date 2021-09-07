#include "function_4.h"

int fact(int a)
{
    if(a < 0)
    {
        return 0;
    }
    if(a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}
