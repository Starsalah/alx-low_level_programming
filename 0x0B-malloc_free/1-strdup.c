#include "main.h"
#include <stdio.h>
#include <stdlb.h>

/**
 * _strdup - duplicates a string to new memory space location
 *
 * @str: pointer to string
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	/* allocate memory for new string */
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	/* copy string to new memory location */
	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}
