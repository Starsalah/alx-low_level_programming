#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			c = i + '0'; /* convert int to corresponding char */
		}
		else
		{
			c = i - 10 + 'a'; /* convert int to corresponding char */
		}
		putchar(c);
	}

	putchar('\n');

	return (0);
}
