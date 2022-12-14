#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - Concatenates two string
 * @dest: First string
 * @src: Second string
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
