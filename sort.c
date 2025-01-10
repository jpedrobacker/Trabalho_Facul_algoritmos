#include "sort.h"

// Função de ordenação por contagem, usada como parte do Radix Sort
void counting_sort(int *arr, int size, int exp)
{
	int output[size];	 // Array para armazenar a saída ordenada temporária
	int count[19] = {0}; // Array de contagem (para dígitos de -9 a 9)

	// Conta a ocorrência de cada dígito (incluindo dígitos negativos)
	for (int i = 0; i < size; i++)
	{
		int digit = (arr[i] / exp) % 10; // Obtém o dígito na posição atual
		count[digit + 9]++;				 // Ajusta o índice para lidar com números negativos
	}

	// Acumula os valores de contagem para determinar a posição final
	for (int i = 1; i < 19; i++)
		count[i] += count[i - 1];

	// Constrói o array de saída ordenado
	for (int i = size - 1; i >= 0; i--)
	{
		int digit = (arr[i] / exp) % 10;
		output[count[digit + 9] - 1] = arr[i];
		count[digit + 9]--;
	}

	// Copia os elementos ordenados de volta para o array original
	for (int i = 0; i < size; i++)
		arr[i] = output[i];
}

// Função principal de Radix Sort
void radix_sort(int *arr, int size)
{
	int max = find_max_num(arr, size);
	int i = 1;

	// Itera sobre cada dígito (unidades, dezenas, centenas, etc.)
	for (int exp = 1; max / exp > 0; exp *= 10)
	{
		counting_sort(arr, size, exp);
		printf("Iteração %d: ", i++);
		print_array(arr, size);
	}
	printf("\n");
}
