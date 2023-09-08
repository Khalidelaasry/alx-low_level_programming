#include <stdio.h>
/**
 * main - Entry point
 * This C program prints the lowercase and uppercase alphabet in a single
 * line using two for loops. The first loop prints letters from 'a' to 'z',
 * and se loop prints uppercase letters from 'A' to 'Z'. After printing both
 * alphabets, it inserts a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
