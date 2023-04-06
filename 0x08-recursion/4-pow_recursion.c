#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to the power of y.
 *
 * @x: The base number to raise.
 * @y: The power to which to raise the base.
 *
 * Return: The result of raising x to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
