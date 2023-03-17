#include <stdio.h>
#include <string.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0,
 *followed by a new line.
 *
 *Return:  Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);

}
