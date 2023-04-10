#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - converts a string to an integer
*@argc: numbers of arguments
*@argv: arrays of arguments
* Return: the int converted from the string
*/
int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	for (i = 1; i < argc; i++)
	{
		if (argc < 2)
		{
			printf("Error");
			return (1);
		}
		res *= atoi(argv[i]);
		printf("%d", res);
	}
	putchar('\n');
	return (0);
}
