#include "sort.h"

/**
 * _intswap - Function that swaps two integers in an array.
 * @a: first integer to swap.
 * @b: second integer to swap.
 */
void _intswap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Function that sorts an array of integers
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			_intswap(array + i, min);
			print_array(array, size);
		}
	}
}
