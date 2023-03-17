#include <stdio.h>
#include <string.h>
/**
 *main - prints the alphabet in lowercase, and then in uppercase
 *followed by a new line
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	char chrac;

	for (chrac = 'a'; chrac <= 'z'; chrac++)
	{
		putchar(chrac);
	}
	for (chrac = 'A'; chrac <= 'Z'; chrac++)
	{
		putchar(chrac);
	}
	putchar('\n');
	return (0);
}
