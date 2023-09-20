#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Description: This function takes an array of integers and reverses
 * the order of its elements.
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		n = a[start];
		a[start] = a[end];
		a[end] = n;
		start++;
		end--;
	}
}
