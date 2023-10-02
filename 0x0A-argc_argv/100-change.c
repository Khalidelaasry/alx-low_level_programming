#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program to calc minimum coins needed for change.
 * @argc: Argument count, should be 2.
 * @argv: Array of arguments, where argv[1] is the amount in cents.
 *
 * Return: 0 if successful,1 if incorrect num of arguments or negative amount.
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
