#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of 2 diagonals of a square matrix of integers.
 * @size: size of matrix
 * @a: square matrix to sum the diagonals
 */
void print_diagsums(int *a, int size)
{
	int s;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (s = 0; s < size; s++)
	{
		sum += a[(size * s) + s];
		sum1 += a[(size * (s + 1)) - (s + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
