#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    /* Print single digit numbers of base 10 using putchar() */
    for (i = 48; i < 58; i++)
    {
        putchar(i);
    }

    /* Print newline character using putchar() */
    putchar('\n');

    return (0);
}
