#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int res;

	a = 1;
	res = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		while (argv[a] && a <= argc)
		{
			b = 0;
			while (argv[a][b])
			{
				if (argv[a][b] < '0' || argv[a][b] > '9')
				{
					printf("Error\n");
					return (1);
				}
				b++;
			}
			res += atoi(argv[a]);
			a++;
		}
		printf("%d\n", res);
	}
	return (0);
}
