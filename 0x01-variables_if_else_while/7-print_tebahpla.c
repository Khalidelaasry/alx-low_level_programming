#include <stdio.h>
/**
 * main - Entry point
 * This C program prints the lowercase alphabet in a single line
 * using a for loop. It starts from 'z' to 'a', printing each
 * character using putchar. After printing the alphabet.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
