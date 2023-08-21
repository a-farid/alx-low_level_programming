#include "main.h"

/**
 * _isalpha - checks for alphabets character
 * @c: the character to be compared with
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
