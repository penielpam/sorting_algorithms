#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: This function sorts the array using the selection sort algorithm
 *              and prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
    int *min;
    size_t i, j;

    // Check if the array is NULL or has fewer than 2 elements
    if (array == NULL || size < 2)
        return;

    // Iterate through the array
    for (i = 0; i < size - 1; i++)
    {
        // Find the minimum element in the unsorted part of the array
        min = array + i;
        for (j = i + 1; j < size; j++)
            min = (array[j] < *min) ? (array + j) : min;

        // Swap the found minimum element with the first element
        // of the unsorted part of the array, if they are different
        if ((array + i) != min)
        {
            swap_ints(array + i, min);

            // Print the array after each swap
            print_array(array, size);
        }
    }
}
