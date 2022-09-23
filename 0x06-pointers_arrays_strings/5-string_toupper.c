#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * to uppercase
 * @s: string to modify
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int u;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] >= 'a' && s[u] <= 'z')

		s[u] = s[u] - 32;
	}

	return (s);
}
