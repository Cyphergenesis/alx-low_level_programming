#include <stdio.h>
#include "main.h"
/**
 *main- prints the number of arguments passed to the program
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
