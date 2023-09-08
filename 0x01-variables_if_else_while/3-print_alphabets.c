#include <stdio.h>
/*
 * This C program prints the lowercase and uppercase English alphabet in a single
 * line using two for loops. The first loop prints lowercase letters from 'a' to 'z',
 * and the second loop prints uppercase letters from 'A' to 'Z'. After printing both
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
	
	return 0;
}
