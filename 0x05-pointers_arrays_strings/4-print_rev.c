#include "main.h"
#include "holberton.h"

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
