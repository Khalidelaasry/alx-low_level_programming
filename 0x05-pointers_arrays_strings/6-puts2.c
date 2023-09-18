#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
