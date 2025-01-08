#include "sort.h"

void	radix_sort(int *arr, int size)
{
	const int num_bits = sizeof(int) * 8;

	for (int bits = 0; bits < num_bits; bits++)
	{
		int	zeroBits[size], oneBits[size];
		int	zeroCount = 0, oneCount = 0;

		for (int i = 0; i < size; i++)
		{
			if (arr[i] & (1 << bits))
				oneBits[oneCount++] = arr[i];
			else
				zeroBits[zeroCount++] = arr[i];
		}
		int x = 0;
		for (int i = 0; i < zeroCount; i++)
			arr[x++] = zeroBits[i];
		for (int i = 0; i < oneCount; i++)
			arr[x++] = oneBits[i];
	}
}
