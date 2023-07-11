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

	while (str[i] != '\0')
	{
		a = malloc(sizeof(char) * (i + 1));
		i++;
	}

	if (a == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		a[s] = str[s];

	return (a);

}
