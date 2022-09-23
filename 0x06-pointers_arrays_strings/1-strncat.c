#include "main.h"

/**
 * *_strncat - Concatenates n bytes from strings.
 * @dest: first string
 * @src: second string
 * @n: the number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
