#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * This C program generates a random number and checks if it's positive, negative, or zero.
 * The 'srand' function is used to seed the random number generator with the current time.
 * The generated random number is checked and the result is printed to the console.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
