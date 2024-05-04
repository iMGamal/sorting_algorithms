#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Entry point
 * Description: function that sorts arrays
 * array: first argument of type int
 * size: second argument of type unsigned int
 * Return: Always 0 (Success)
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, k;

	if (!array || !size)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int key = array[j];

				array[j] = array[j + 1];

				array[j + 1] = key;
				printarray(array, size);
			}
		}
		i++;
	}
}
