#include "main.h"

/**
 * flip_bits - counts the number of bits to turn
 * to change from one number into another
 * @n: number one
 * @m: number two
 *
 * Return: number of bits to turn
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
