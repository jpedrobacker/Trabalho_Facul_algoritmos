#include "sort.h"

void	counting_sort(int *arr, int size, int exp)
{
	int output[size];
	int count[19] = {0};

	for (int i = 0; i < size; i++)
	{
		int digit = (arr[i] / exp) % 10;
		count[digit + 9]++;
	}

	for (int i = 1; i < 19; i++)
		count[i] += count[i - 1];

	for (int i = size - 1; i >= 0; i--)
	{
		int digit = (arr[i] / exp) % 10;
		output[count[digit + 9] - 1] = arr[i];
		count[digit + 9]--;
	}
	for (int i = 0; i < size; i++)
		arr[i] = output[i];
}

void	radix_sort(int *arr, int size)
{
	int max = find_max_num(arr, size);
	int i = 1;

	for (int exp = 1; max / exp > 0; exp *= 10)
	{
		counting_sort(arr, size, exp);
		printf("Iteração %d: ", i++);
		print_array(arr, size);
	}
	printf("\n");
}
