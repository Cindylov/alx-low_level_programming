#include "main.h"
#include <stdio.h>

/**
 * swap_int - switches value of first input with the value of the second input.
 * @a: First value to swap.
 * @b: Second value to swap.
 * Return: 0 (Success)
 **/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
