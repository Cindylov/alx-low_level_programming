#include "main.h"
/**
 * print_triangle - A function that prints triangle
 * @size: numbers
 * Return: Void
 */
void print_triangle(int size)
{
	int i, j;
	int k = size;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		k--;
		for (j = 0; j < size; j++)
		{
			if (j >= k)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar(10);
	}
}
