#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int i = 0;
	int j = 0;
	int temp;
	int noswap = 0;

	for(i = 0; i < size - 1; i++)
	{
		noswap = 0;
		for(j = 0; j < size - i - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				noswap = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if(noswap == 0)
			break;
	}
}
