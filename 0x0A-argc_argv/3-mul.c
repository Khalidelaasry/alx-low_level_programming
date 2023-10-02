#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings representing the arguments.
 *
 * Return: 0 if exactly 2 arguments are provided,otherwise return an error msg.
 */
int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
		printf("Error\n");
	return (0);
}
