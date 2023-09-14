#include "main.h"
/*
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: This fun uses nested loops to print numbers from 0 to 14 x 10.
 * It handles double-digit numbers by printing both digits individually.
 * Each set of numbers is followed by a newline character.
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
