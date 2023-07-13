#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: the number of bytes to allocate
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
