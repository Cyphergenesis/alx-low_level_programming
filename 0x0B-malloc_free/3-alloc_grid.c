#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **nos;
	int w, z;

	if (width <= 0 || height <= 0)
		return (NULL);
	nos = malloc(sizeof(int *) * height);
	if (nos == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		nos[w] = malloc(sizeof(int) * width);
		if (nos[w] == NULL)
		{
			for (; w >= 0; w--)
			free(nos[w]);
			free(nos);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (z = 0; z < width; z++)
			nos[w][z] = 0;
	}
	return (nos);
}
