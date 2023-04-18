#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p;
	int m;

while (*s)
{
	for (m = 0, p = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		{
			p++;
			break;
		}
		else if (accept[m + 1] == '\0')

			return (p);
		}
	s++;
	}
	return (p);
}
