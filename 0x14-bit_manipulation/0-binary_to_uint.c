#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b : binary.
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x = 0;

	if (!b)
	{
		return (0);
	}

	while (b[x] != '\0')
	{

		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

	result = (result << 1) + (b[x] - '0');
	x++;
	}
	return (result);
}

