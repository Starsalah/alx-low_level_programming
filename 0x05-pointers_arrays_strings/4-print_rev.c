#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse to stdout, followed by a newline.
 * @s: Pointer to a string.
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		write(STDOUT_FILENO, &s[i], 1);

	write(STDOUT_FILENO, "\n", 1);
}
