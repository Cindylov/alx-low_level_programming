#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Locates a substring.
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: Pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; needle[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
