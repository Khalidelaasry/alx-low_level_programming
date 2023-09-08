#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This C program prints combinations of three-digit numbers
 * from 012 to 789 using nested loops and putchar. It ensures
 * that each combination has unique digits to avoid repetition.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
