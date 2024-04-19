#include "sort.h"

void sel_swap(int *array, int min, int i)
{
	int temp = array[min];

	array[min] = array[i];
	array[i] = temp;
}

void selection_sort(int *array, size_t size)
{
size_t i, j;
size_t min;

for (i = 0; i < size - 1; i++)
{
	min = i;
	for (j = i + 1; j < size; j++)
	if (array[j] < array[min])
	min = j;
	if (min != i)
	sel_swap(array, min, i);
	print_array(array, size);
}
}
