#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: Variable
 * @b: Variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
