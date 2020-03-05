//logic.cpp

#include "logic.h"

int (remove_element(int * vals, const int value, const size_t len))
{
    int i = 0;
    for (int j = 0; j < len, j++)
    {
        if (vals[j] != value)
        {
            vals[i] = vals[j];
            i++;
        }
    }
    return i;
}