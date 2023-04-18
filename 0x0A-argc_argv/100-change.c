#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int i, res, check;
	int coins[5] = {25, 10, 5, 2, 1};

	check = atoi(argv[1]);
	res = 0;
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	if (check < 0)
	{
	printf("0");
	printf("\n");
	}
		for (i = 0; i < 5 && check >= 0; i++)
		{

			while (check >= coins[i])
			{
			res++;
			check -= coins[i];
			}
		}
	printf("%d\n", res);
	return (0);
}
