#include "main.h"
/**
 * print_array - Prints elements of an array
 *
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Return: void
 *
 * Desc: This function prints the elements of an array `a` up to the
 * index`n-1`,separating them by , and spaces. It then prints a newline.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
