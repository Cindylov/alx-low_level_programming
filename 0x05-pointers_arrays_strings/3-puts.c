#include "main.h"
#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string to print.
 * @str: "Holberton"
 * @str: "Lorem ipsum.."
 * @str " ";
 * Return: 0 (Success)
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
