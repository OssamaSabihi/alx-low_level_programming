#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, a, b, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (a = 0; s2[a] != '\0'; a++)
		;

	s = malloc(sizeof(char) * (i + a + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (b = 0; b < i; b++)
		s[b] = s1[b];

	limit = a;
	for (a = 0; a <= limit; b++, a++)
		s[b] = s2[a];

	return (s);
}
