#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: C program prints combinations of numbers from 01 to 89
 * using nested loops and putchar. It avoids printing combinations with
 * the same digits (e.g., 11, 22) to ensure unique pairs.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
