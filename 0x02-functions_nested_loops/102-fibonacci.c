#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This C program generates the first 50 numbers in the Fibonacci.
 * It uses a loop to calculate and print each Fibonacci number by adding the
 * previous two numbers. The initial values are 1 and 2, and it prints the
 * result to the console.
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	int	count = 50;
	int	i;
	long int	fib1 = 1;
	long int	fib2 = 2;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= count; i++)
	{
		long int	next = fib1 + fib2;

		printf(", %ld", next);

		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
