#include <stdio.h>
#include <string.h>
/**
 *main - prints all the numbers of base 16 in lowercase,
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	char chrac;

	for (chrac = 0; chrac <= 9; chrac++)
	{
		putchar(chrac);
	{
	for (chrac = 'a'; chrac <= 'f'; chrac++)
	{
		putchar(chrac);
	}
	putchar("\n");

	return (0);
}
