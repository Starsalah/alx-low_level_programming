#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    /* Print single digit numbers of base 10 */
    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    /* Print newline character */
    putchar('\n');

    return (0);
}
