#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This C program calculates the sum of all  numbers below 1024
 * that are multiples of either 3 or 5. It uses a for loop to iterate through
 * numbers, checks for divisibility by 3 or 5, and accumulates the sum.
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	int	sum, counter;

	sum = 0;
	for (counter = 1; counter < 1024; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			sum = counter + sum;
		}
	}
	printf("%d\n", sum);
	return (0);
}
