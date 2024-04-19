#include "sort.h"

void fub_swap(int *array, int i, int j)
{
int temp = array[i];
array[i] = array[j];
array[j] = temp;
}

void selection_sort(int *array, size_t size)
{
  size_t i, j;
  size_t min;

  for (i = 0; i < size - 1; i++)
  {
    min = i;
    for (j = i + 1; j < size; j++)
    {
      if (array[j] < array[min])
      min = j;
    }
    if (min != i)
    fub_swap(array, min, i);
    print_array(array, size);
  }
}
