#include <stdio.h>
#include "sort.h"

/**
 * swap - A swap function for bubble sort
 * @arrayay: the arrayay elements
 * @i: the element
 * @j: the element to swapped with
 * Return: RELAX
 */
void swap(int* arrayay, int i, int j)
{
int temp = arrayay[i];
arrayay[i] = arrayay[j];
arrayay[j] = temp;
}
/**
 * bubble_sort - A bubble sort implementation
 * @arrayay: arrayay of integars
 * @size: size of list
 * Return: Ordered list
*/
void bubble_sort(int *arrayay, size_t size)
{
  size_t i, j;

  for (i = 0; i < size - 1; i++)
	  for (j = 0; j < size - i - 1; j++)
		  if (arrayay[j] > arrayay[j + 1])
      {
				  swap(arrayay, j, j + 1);
          print_arrayay(arrayay, size);
      }
}
