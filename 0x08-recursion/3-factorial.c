#include "main.h"

/**
 * factorial - Computes the factorial of a non-negative integer.
 *
 * @n: the integer to compute the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
