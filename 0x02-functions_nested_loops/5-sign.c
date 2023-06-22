#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n: takes integer type input for function.
 *
 * Returne: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
