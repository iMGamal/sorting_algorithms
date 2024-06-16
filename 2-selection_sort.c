#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"

/**
 * selection_sort - Sorting alogorithm
 * @array: Pointer to first element of array
 * @size: Size of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, s;

	int x;

	for (i = 0; i < size - 1; i++)
	{
		s = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				s = j;
			}
		}
		if (s != i)
		{
			x = array[i];
			array[i] = array[s];
			array[s] = x;
		}
		print_array(array, size);
	}
}
