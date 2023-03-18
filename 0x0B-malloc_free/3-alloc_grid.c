#include <stdlib.h>
/**
 * alloc_grid - allocates memory for 2D
 * @width: width
 * @height: height
 * Return: Memory allocated
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i,j,x,y;

	i = j = x = y = 0;
	if (height <= 0 || width <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
