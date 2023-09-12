#include "main.h"
/**
 * times_table - Prints the multiplication table for numbers 0 to 9
 *
 * Description:This function generates a multiplication table for num 0 to 9.
 * It uses nested loops to iterate through each combination of numbers,
 * calculates the product, and prints the result in a formatted table.
 */
void	times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}
