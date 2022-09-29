#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s < 1)
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
