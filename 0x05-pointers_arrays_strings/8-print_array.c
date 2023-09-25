#include "main.h"
/**
 * print_array - Prints elements of an array followed by a newline
 *
 * @a: Pointer to an array of integers
 * @n: Number of elements in the array
 *
 * Des:Thisfunction takes a pointer to an array of integers and the 
 * in the array.It prints the elements separated by (,) and followed by new
 * character.
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
