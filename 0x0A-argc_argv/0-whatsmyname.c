#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main-programe that prints its name
 *@argc: number of argument
 *@argv: array of arguments
 *
 *Return:Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');
	return (0);
}
