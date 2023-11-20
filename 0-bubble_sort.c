/* 
 * Custom Bubble Sort Implementation
 * File: custom_sort.c
 */

#include "sorting_utils.h"

/**
 * swap_elements - Swap two elements in an array.
 * @a: Pointer to the first element.
 * @b: Pointer to the second element.
 */
void swap_elements(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * custom_bubble_sort - Sort an array of integers in ascending order using bubble sort.
 * @arr: Pointer to the array of integers.
 * @size: Size of the array.
 *
 * Description: This function prints the array after each swap.
 */
void custom_bubble_sort(int *arr, size_t size)
{
    size_t i, len = size;
    bool swapped = false;

    if (arr == NULL || size < 2)
        return;

    while (!swapped)
    {
        swapped = true;
        for (i = 0; i < len - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap_elements(arr + i, arr + i + 1);
                print_array(arr, size);
                swapped = false;
            }
        }
        len--;
    }
}
