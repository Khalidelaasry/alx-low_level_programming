#include "main.h"
/**
 * rot13 - Encodes a string using ROT13 substitution cipher
 *
 * @s: Pointer to the input string
 *
 * Return: Pointer to the modified string
 *
 * Description: This function applies the ROT13 substitution cipher to
 * the input string. ROT13 is a simple letter substitution cipher that
 * replaces a letter with the letter 13 positions after it in the alphabet.
 * It maintains the case of the original letter. The function iterates
 * through the input string and replaces each character according to the
 * ROT13 cipher. It then returns the modified string.
 */
char	*rot13(char *s)
{
	int	i, j;

	char	old[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char	new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; old[j]; j++)
		{
			if (s[i] == old[j])
			{
				s[i] = new[j];
				break;
			}
		}
	}
	return (s);
}
