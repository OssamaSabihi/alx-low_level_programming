#include "main.h"

/**
 * _isupper - checks if c is upper case
 * @c: input for an alphabet
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
