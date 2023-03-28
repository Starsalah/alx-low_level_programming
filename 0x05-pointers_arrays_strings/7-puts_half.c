#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to a string.
 * Return: void.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
