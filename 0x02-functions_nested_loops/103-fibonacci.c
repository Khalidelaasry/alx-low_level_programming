#include <stdio.h>

/**
 * fibonacci - returns fibonacci numbers.
 * @n: integer
 * Return: 1 if n=0, 2 if n=1, else (fib(n-1) + fib(n-2)).
 */

int fibonacci(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (2);
	}
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
	return (0);
}

/**
 * main - print the sum of the even-valued fibonacci numbers
 * that are less than 4,000,000.
 * Return: 0 (success).
 */

int main(void)
{
	int i, sum;

	sum = 0;
	i = 0;
	while (fibonacci(i) < 4000000)
	{
		if (fibonacci(i) % 2 == 0)
		{
			sum = sum + fibonacci(i);
		}
		++i;
	}
	printf("%d\n", sum);
	return (0);
}
