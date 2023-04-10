#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main - print the name of the program
 *@argc: count number of arguments
 *@argv: Array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int sum = 0;
	int i;
	char a[1];

	for (i = 1; i < argc; i++)
	{
		if (argc > 1 || argc != a[1])
		{
		sum += atoi(argv[i]);
		}
		else
		{
		printf("Error\n");
		return (1);
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
