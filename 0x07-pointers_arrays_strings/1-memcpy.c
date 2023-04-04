#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@l: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int l)
{
	int j;
	int k;

	for (j = 0, k = l; j < k; j++)
	{
		dest[j] = src[j];
		l--;
	}
	return (dest);
}
