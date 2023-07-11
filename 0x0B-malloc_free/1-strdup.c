#include "main.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string that s the pointer points to
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int s = 0;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
	{
		a = malloc(s * sizeof(*str) + 1);
	}

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < s; i++)
			a[i] = str[i];
	}
	return (a);

}
