#include "sort.h"

int main()
{
	int	arr[] = {213, 22, 4342, 1, 983838, 10, 4, -2};
	int	size = sizeof(arr) / sizeof(arr[0]); // Formula para saber o número total de elementos em um Array

	printf("Antes da ordenação: ");
	print_array(arr, size);

	radix_sort(arr, size);
	printf("Pós ordenação: ");
	print_array(arr, size);

	return (0);
}
