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
/**
* partition - My partiton func for my presorted array
* @array: Data Storage
* @low: the lowest number found
* @high: My pivot
* @size: My bounds
* Return: My lowest number + 1
*/
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
if (array[i] != array[j])
{
	quick_swap(array, i, j);
print_array(array, size);
}
}
}
if (array[i + 1] != array[high])
{
quick_swap(array, i + 1, high);
print_array(array, size);
}
return (i + 1);
}
/**
* quick_sort - A bounds keeper
* @array: The array of numbers
* @size: The Size of the array
* Return: My frustration
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_pointer_return(array, 0, size - 1, size);
}
/**
* quick_sort_pointer_return - Frustration and pettiness
* @array: The array
* @low: Low number checked
* @high: The pivot
* @size: The size of the array
* Return: Sumthing
*/
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
