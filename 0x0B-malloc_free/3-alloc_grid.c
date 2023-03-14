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
	int **bb;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	bb = malloc(sizeof(int *) * height);

	if (bb == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		bb[x] = malloc(sizeof(int) * width);

		if (bb[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bb[x]);

			free(bb);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bb[x][y] = 0;
	}

	return (bb);
}
