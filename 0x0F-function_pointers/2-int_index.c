#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: input intege array.
 * @size: the array size.
 * @cmp: the compare function
 *
 * Return: the integer index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
