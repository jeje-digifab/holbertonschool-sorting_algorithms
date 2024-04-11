#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 *                  Selection sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Description: The function uses the Selection sort algorithm to sort the
 *              array.
 *
 *              It iterates through the array, finding the minimum element and
 *              swapping it with the first unsorted element.
 *
 *              This process is repeated until the entire array is sorted.
 *              The array is printed after each swap.
 *
 *              If the array is NULL or its size is less than 2, the function
 *              does not perform any operation.
 *
 * Time complexity:
 * Best case: O(n^2) - The algorithm always performs the same number of
 * operations, regardless of the input order.
 *
 * Average case: O(n^2) - The algorithm always performs the same number of
 * operations, regardless of the input order.
 *
 * Worst case: O(n^2) - The algorithm always performs the same number of
 * operations, regardless of the input order.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, min;

	if (!array || size < 2)
	{
		return;
	}

	for (i = 0;  i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if ((size_t)min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
