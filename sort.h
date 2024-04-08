#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


listint_t *create_listint(const int *array, size_t size);
void sort_swap(listint_t **list, listint_t *new_node);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void swap(int* array, int i, int j);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
