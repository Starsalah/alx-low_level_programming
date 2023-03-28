#include "main.h"

/**
 * _strcpy - copy the string pointed to by src to the buffer pointed to by dest
 * @dest: buffer to copy the string to
 * @src: string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (dest_start);
}
