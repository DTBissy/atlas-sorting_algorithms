#include <stdio.h>
#include "sort.h"

/**
* bubble_swap - A swap function for bubble sort
* @array: the array elements
* @i: the element
* @j: the element to swapped with
* Return: RELAX
*/
void fub_swap(int *array, int i, int j)
{
int temp = array[i];
array[i] = array[j];
array[j] = temp;
}
/**
* bubble_sort - A bubble sort implementation
* @array: array of integars
* @size: size of list
* Return: Ordered list
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j;

for (i = 0; i < size - 1; i++)
	  for (j = 0; j < size - i - 1; j++)
		  if (array[j] > array[j + 1])
	{
				  fub_swap(array, j, j + 1);
		print_array(array, size);
	}
}
