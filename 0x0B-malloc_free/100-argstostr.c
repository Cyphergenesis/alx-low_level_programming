#include "main.h"
#include <stdlib.h>
/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int i, n, k = 0, j = 0;
	char *strings;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			j++;
	}
	j += ac;
	strings = malloc(sizeof(char) * j + 1);
	if (strings == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			strings[k] = av[i][n];
			k++;
		}
		if (strings[k] == '\0')
		{
			strings[k++] = '\n';
		}
	}
	return (strings);
}
