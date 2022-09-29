#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: A string.
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len;

	len = strlen(s);
	return (len);
	_strlen_recursion(s);
}
