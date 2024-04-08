#include "sort.h"
/**
 * insertion_sort_list - Implements a insertion sort
 * @list: List to sort from
 * Return: Return
*/
void insertion_sort_list(listint_t **list)
{
size_t i, key, j;
for (i = 0; i < n; i++)
{
  key = array[i];
  j = i - 1;

  while (j >= 0 && array[j] > key)
  {
    array[j + 1] = array[j];
    j = j - 1;
  }
  array[j + 1] = key;
  }
}