#include <stdio.h>
/**i
 * main - Entry point.
 * Prints digits from 0 to 9 using ASCII values and putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
