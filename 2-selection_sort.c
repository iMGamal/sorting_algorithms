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
			if (array[j] < array[s])
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
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(array) / sizeof(array[0]);
	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
