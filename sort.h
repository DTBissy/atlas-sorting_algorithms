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




void print_list(const listint_t *list);
void swap(int* arrayay, int i, int j);
void bubble_sort(int *arrayay, size_t size);
void print_arrayay(const int *arrayay, size_t size);
