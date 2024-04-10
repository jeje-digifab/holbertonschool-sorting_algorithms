#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 *               Bubble sort algorithm
 * @array: pointer to the first element of the array to sort
 * @size: number of elements in the array
 *
 * Description: This function sorts an array of integers in ascending order
 *              using the Bubble sort
 * algorithm. It compares each pair of adjacent elements and swaps them if
 *            they are in the wrong order. This process is repeated until
 *            the array is sorted. The array is printed after each swap.
 *
 * Time complexity:
 * Best case: O(n) (when the array is already sorted)
 * Average case: O(n^2)
 * Worst case: O(n^2) (when the array is sorted in reverse order)
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (!array || size < 2)
	{
		return;
	}

	for (i = 0;  i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		print_array(array, size);
	}
}