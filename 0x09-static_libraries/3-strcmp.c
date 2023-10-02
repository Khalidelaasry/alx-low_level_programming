#include "main.h"
/**
 * _strcmp - Compares two strings
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return:(-)value if s1 < s2, 0 if s1 == s2, (+) value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] && s2[i] && s1[i] ==  s2[i])
		i++;
	return (s1[i] - s2[i]);
}
