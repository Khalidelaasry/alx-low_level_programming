#include "main.h"
/**
 * cap_string - Capitalizes the first letter of each word in a string
 *
 * @s: Pointer to the input string
 *
 * Return: Pointer to the modified string
 *
 * Description: This function iterates through a string and capitalizes
 * the first letter of each word if it is preceded by a space,tab,(\n),
 * comma, semicolon, period, exclamation point, question mark,(""),
 * opening parenthesis,closing parenthesis, opening curly brace, or closing
 * curly brace. It then returns the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
					s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
					s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
					s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
					s[i - 1] == '}')
			{
				s[i] -= 32;
			}
		}
		i++;
	}

	return (s);
}
