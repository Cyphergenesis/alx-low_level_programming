#include <stdio.h>
#include <stdlib.h>
/**
 *main -  that prints the alphabet in lowercase, followed by a new line.
 *Print all the letters except q and e
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			ch++;
		putchar(ch);
	}

	return (0);
}
