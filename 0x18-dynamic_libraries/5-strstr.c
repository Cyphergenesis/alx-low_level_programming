#include "main.h"
/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *k = needle;
	while (*h == *k && *h != '\0')
	{
		h++;
		k++;
	}
	if (*k == '\0')
		return (haystack);
	}

	return (0);
}
