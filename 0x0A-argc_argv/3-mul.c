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
	int  a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	i = a * b;
	printf("%d", i);
	putchar('\n');
	return (0);
}
