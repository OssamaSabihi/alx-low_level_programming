#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: array size
 * @c: the char to  initializes
 *
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);

}
