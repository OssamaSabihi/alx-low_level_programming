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
	char *s;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	;
	s = (char *)malloc(sizeof(char) * (a + 1));

	if (s == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		s[b] = str[b];

	return (s);
}

