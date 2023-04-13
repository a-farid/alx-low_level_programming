#include "main.h"
#include <stdlib.h>
/**
 * array_range - creating an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
