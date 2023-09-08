#include <stdio.h>

/**
 * main - prints numbers 0-9 using putchar.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');

		if (k < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
