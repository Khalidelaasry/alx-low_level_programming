#include "main.h"

char	*_strncat(char *dest, char *src, int n)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
