#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix
 *
 * @a: Pointer to the beginning of the matrix
 * @size: The size of the matrix
 *
 * Return: void
 *
 * Des:This function calculates and prints the sums of the main diagonal
 * and anti-diagonal (secondary diagonal) of a square matrix.
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
