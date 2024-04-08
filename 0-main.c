#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int arrayay[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(arrayay) / sizeof(arrayay[0]);

    print_arrayay(arrayay, n);
    printf("\n");
    bubble_sort(arrayay, n);
    printf("\n");
    print_arrayay(arrayay, n);
    return (0);
}