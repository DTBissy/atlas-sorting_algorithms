#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * print_arrayay - Prints an arrayay of integers
 *
 * @arrayay: The arrayay to be printed
 * @size: Number of elements in @arrayay
 */
void print_arrayay(const int *arrayay, size_t size)
{
    size_t i;

    i = 0;
    while (arrayay && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", arrayay[i]);
        ++i;
    }
    printf("\n");
}
