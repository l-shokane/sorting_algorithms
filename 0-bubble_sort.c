#include "sort.h"

/**
 * _intswap - Function that swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 * Return: Void
 */
void _intswap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Function that sorts an
 *  array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbli = false;

	if (array == NULL || size < 2)
		return;

	while (bubbli == false)
	{
		bubbli = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				_intswap(array + i, array + i + 1);
				print_array(array, size);
				bubbli = false;
			}
		}
		len--;
	}
}
