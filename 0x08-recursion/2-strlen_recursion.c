#include "main.h"

/**
 * int _strlen_recursion - returns the length of a string
 *
 *@s: string pointer
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a += _strlen_recursion(s + 1) + 1;
	}

	return (a);
}
