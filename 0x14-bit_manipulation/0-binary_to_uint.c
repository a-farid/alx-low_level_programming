#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int lenght, Bz2;

	if (!b)
		return (0);

	u = 0;

	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;

	for (lenght--, Bz2 = 1; lenght >= 0; lenght--, Bz2 *= 2)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}

		if (b[lenght] & 1)
		{
			u += Bz2;
		}
	}

	return (u);
}
