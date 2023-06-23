#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}

}
