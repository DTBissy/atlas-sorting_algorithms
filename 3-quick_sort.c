#include "sort.h"

/**
* quick_swap - Swap for my quicksort
* @array: Pointer for array
* @i: Data 1 to be swapped
* @j: Date 2 to be swapped
* Return: Swapper datar
*/
void quick_swap(int *array, int i, int j)
{
int temp = 0;

temp = array[i];
array[i] = array[j];
array[j] = temp;
}
int partition(int *array, int low, int high, size_t size)
{
int j = low;
int pivot = array[high];
int i = low - 1;

for (j = low; j < high; j++)
{
	if (array[j] < pivot)
	{
	i++;
	quick_swap(array, i, j);
  }
}
quick_swap(array, i + 1, high);
print_array(array, size);
return (i + 1);
}
void quick_sort(int *array, size_t size)
{

if (array == NULL || size < 2)
return;
quick_sort_pointer_return(array, 0, size - 1, size);
}

void quick_sort_pointer_return(int *array, int low, int high, size_t size)
{
  size_t piv;

if (low < high)
{
	piv = partition(array, low, high, size);
	quick_sort_pointer_return(array, low, piv - 1, size);
	quick_sort_pointer_return(array, piv + 1, high, size);
}
}
