#include <stdio.h>
/**
 * main - prints numbers in base 16 using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar(hexa);
	}

	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');

	return (0);
}
