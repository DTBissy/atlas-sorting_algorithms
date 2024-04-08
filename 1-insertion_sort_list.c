#include "sort.h"

void sort_swap(listint_t **list, listint_t *new_node)
{
  listint_t* current;

  if (*list == NULL || (*list)->n >= new_node->n)
  {
    new_node->next = *list;
    *list = new_node;
  }
  else
  {
    current = *list;
    while (current->next != NULL && current->next->n < new_node->n)
    {
      current = current->next;
    }
    new_node->next = current->next;
    if (current->next != NULL)
    current->next->prev = new_node;
    current->next = new_node;
    new_node->prev = current;
  }
}
void insertion_sort_list(listint_t **list)
{
  listint_t* sorted = NULL;
  listint_t* current = *list;
  listint_t* next;

  while (current != NULL)
  {
    next = current->next;
    sort_swap(&sorted, current);
    current = next;
  }
  *list = sorted;
  print_list(*list);
  }