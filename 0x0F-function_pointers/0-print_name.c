#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the input name.
 * @f: thefunction pointer.
 * Return: no return.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
