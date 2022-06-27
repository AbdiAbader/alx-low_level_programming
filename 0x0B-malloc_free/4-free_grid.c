#include <stdlib.h>
#include "main.h"
/**
 *free_grid - free allocated memory
 *@grid: 2 dimensional array
 *@height: height of the array
 *Return: void
 */
void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
