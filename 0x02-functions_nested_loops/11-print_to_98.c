#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints numbers from 'n' to 98
 *
 * @n: The starting number
 *
 * Description: This function prints a sequence of nums starting from 'n' and
 * incrementing or decrementing until it reaches 98. It uses a while
 * loop to achieve this, and prints each number separated by a comma.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
