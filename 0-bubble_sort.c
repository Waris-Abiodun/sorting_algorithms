#include "sort.h"

/**
 * bubble_sort - a bubble sort algorithm
 * @array: the array we are sorting
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0;
	int j = 0;
	int temp;
	int noswap = 0;
	int max = size - 1;


	if (!array || size < 2)
		return;

	for (i = 0; i < max; i++)
	{
		noswap = 0;
		for (j = 0; j < max - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				noswap = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (noswap == 0)
			break;
	}
}
