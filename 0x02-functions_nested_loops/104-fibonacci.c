#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This C program generates and prints the first 98 numbers.
 * Itcalculates each number by adding the previous two,large values by
 * breaking them intochunks of ninedigits.It prints the result to the console.
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	unsigned long int a, b, c, bof1, bof2, cof1, cof2;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	bof1 = b / 1000000000;
	bof2 = b % 1000000000;
	cof1 = c / 1000000000;
	cof2 = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", cof1 + (cof2 / 1000000000));
		printf("%lu", cof2 % 1000000000);
		cof1 = cof1 + bof1;
		bof1 = cof1 - bof1;
		cof2 = cof2 + bof2;
		bof2 = cof2 - bof2;
	}

	printf("\n");

	return (0);
}
