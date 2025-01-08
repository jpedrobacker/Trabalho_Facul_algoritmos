#include "sort.h"

int main()
{
	int	arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
	int	size = sizeof(arr) / sizeof(arr[0]); // Formula para saber o número total de elementos em um Array

	radix_sort(arr, size);
	printArray(arr, size);

	return (0);
}
