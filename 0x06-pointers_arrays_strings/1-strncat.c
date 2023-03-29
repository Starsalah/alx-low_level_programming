#include "main.h"
#include<stdio.h>

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy from src.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while (n-- && *src)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}
