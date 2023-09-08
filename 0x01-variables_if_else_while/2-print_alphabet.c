#include <stdio.h>
/**
 * main - Entry point
 * This C program prints the lowercase alphabet in a single line
 * using a for loop. It starts from 'a' to 'z', printing each
 * character using putchar. After printing the alphabet.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
