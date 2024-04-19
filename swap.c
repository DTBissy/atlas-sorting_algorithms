#include "sort.h"

void swap(int *array, int min, int i)
{
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
}