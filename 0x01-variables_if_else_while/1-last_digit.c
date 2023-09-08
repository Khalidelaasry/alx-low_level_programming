#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number, extracts its last digit, and checks
 *if it's greater than 5, equal to 0, or less than 6 but not 0.
 *Prints the result along with the original number to the console.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %i is %i and is 0\n", n, l);
	else if (l < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
	return (0);
}
