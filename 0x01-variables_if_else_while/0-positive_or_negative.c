#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Generates random number */
/* Checks if it's positive, negative, or zero */
/* Prints result to console */
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
