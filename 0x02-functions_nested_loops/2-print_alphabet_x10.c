#include <unistd.h>
#include "main.h"

void print_alphabet_x10(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		char c = 'a';
		while (c <= 'z')
		{
			write(1, &c, 1);
			c++;
		}
		write(1, "\n", 1);
		n++;
	}
}
