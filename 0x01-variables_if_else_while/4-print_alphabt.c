#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This C program prints the lowercase alphabet in a single line
 * excluding the letters 'e' and 'q' using a for loop. It starts from 'a'
 * to 'z', printing each character using putchar if it's not 'e' or 'q'.
 * After printing the modified alphabet, it inserts a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	
	return (0);
}
