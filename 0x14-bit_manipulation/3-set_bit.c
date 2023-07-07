#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index.
 * @n: pointer of an unsigned long integer.
 * @index: of the bit.
 * Return: 1 if it worked -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
