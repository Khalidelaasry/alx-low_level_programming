#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: This C program generates random char and prints them.
 * It continues generating characters and printing them until the sum of their
 * ASCII values exceeds 2645. Once the sum exceeds 2645, it prints a char
 * that brings the sum to exactly 2772, and then terminates.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
