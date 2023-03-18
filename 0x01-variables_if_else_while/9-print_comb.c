#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0'); /* print digit character */
        if (i != 9)
        {
            putchar(','); /* print comma character */
            putchar(' '); /* print space character */
        }
    }

    putchar('\n');

    return (0);
}
