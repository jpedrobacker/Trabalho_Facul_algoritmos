#include "sort.h"

int find_max_num(int *arr, int size)
{
	int max_num = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max_num)
			max_num = arr[i];
	}
	return (max_num);
}

void printArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
