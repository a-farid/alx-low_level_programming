#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: Printing the last digit of a given number
 * Return: last digit of number
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)a
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
