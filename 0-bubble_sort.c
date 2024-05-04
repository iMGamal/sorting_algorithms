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

	if (array == NULL)
	{
		printf("0\n");
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int key = array[j];

				array[j] = array[j + 1];

				array[j + 1] = key;
				for (k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
			}
		}
	}
}
