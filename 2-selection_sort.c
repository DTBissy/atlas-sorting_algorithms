#include "sort.h"

void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
size_t min = 0;
int temp = 0;

if (array == NULL || size == 0)
return;

for (i = 0; i < size - 1; i++)
{
	min = i;
	for (j = i + 1; j < size; j++)
  {
	if (array[j] < array[min])
	min = j;
  }
	if (min != i)
  {
	temp = array[min];

	array[min] = array[i];
	array[i] = temp;
  print_array(array, size);
}
}
}
