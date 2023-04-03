#include "main.h"
/**
* print_chessboard - Entry point
* @a: array
* Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	int p, v;

	for (p = 0; p < 8; p++)
	{
		for (v = 0; v < 8; v++)
		_putchar(a[p][v]);
		_putchar('\n');
	}
}
