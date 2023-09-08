#include <stdio.h>
/*
 * This C program prints the lowercase English alphabet in a single line
 * using a for loop. It starts from 'a' and iterates up to 'z', printing each
 * character using putchar. After printing the alphabet, it inserts a newline.
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
