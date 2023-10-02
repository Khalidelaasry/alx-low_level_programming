#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings representing the arguments.
 *
 * Return: Always 0 (indicating successful execution).
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
