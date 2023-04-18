#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int j = 0, sen1 = 0, sen2 = 0;

	for (; s1 && s1[sen1]; sen1++)

	while (s2 && s2[sen2])
		sen2++;

	if (n < sen2)
		s = malloc(sizeof(char) * (sen1 + n + 1));
	else
		s = malloc(sizeof(char) * (sen1 + sen2 + 1));

	if (!s)
		return (NULL);
	for (i = 0; i < sen1; i++)
		s[i] = s1[i];
	while (n < sen2 && i < (sen1 + n))
		s[i++] = s2[j++];

	while (n >= sen2 && i < (sen1 + sen2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
