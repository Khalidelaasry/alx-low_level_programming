#include "main.h"
/**
 * print_numbers - Prints the digits from 0 to 9
 *
 * Description:This function uses a loop to iterate through digits from 0 to 9,
 * and prints each digit using the _putchar function. It ends with a newline.
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
