#include "sort.h"

int find_max_num(int *arr, int size)
{
	int max_num = abs(arr[0]);

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) > max_num)
			max_num = abs(arr[i]);
	}
	return (max_num);
}

void print_array(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
