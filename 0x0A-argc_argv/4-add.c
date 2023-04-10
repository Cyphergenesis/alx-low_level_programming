#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *main - print the name of the program
 *@argc: count number of arguments
 *@argv: Array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
