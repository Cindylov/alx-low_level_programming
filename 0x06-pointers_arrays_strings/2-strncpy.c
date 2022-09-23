#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: First string
 * @src: Second string
 * @n: number of bytes to copy
 * Return: a pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
