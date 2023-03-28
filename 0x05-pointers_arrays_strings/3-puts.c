#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to stdout, followed by a newline.
 * @str: Pointer to a string.
 * Return: void.
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	write(STDOUT_FILENO, str, len);
	write(STDOUT_FILENO, "\n", 1);
}
