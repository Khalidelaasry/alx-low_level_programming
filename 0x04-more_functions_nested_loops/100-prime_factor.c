#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:calculates the largest prime factor of the number 612852475143.
 * It uses a loop to iterate through numbers,chek they are factors of the
 * given number. If a factor is found,it updates the num and conti the search.
 * The largest prime factor is then printed to the console.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
