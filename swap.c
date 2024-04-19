#include "sort.h"

void sel_swap(int min, int i)
{
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
}