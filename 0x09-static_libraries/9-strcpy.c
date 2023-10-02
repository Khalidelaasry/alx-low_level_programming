#include "main.h"
/**
 * _strcpy - Copies a string from source to destination
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Description: This function copies the characters from the source string to
 * the destination string, including the null terminator. It then returns a
 * pointer to the destination string.
 *
 * Return: Pointer to the destination string.
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
