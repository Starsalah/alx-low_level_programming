#include "main.h"

/**
 * get_endianness - checks if a machine is a tiny or large endian
 * Return: 0 for large, 1 for tiny
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
