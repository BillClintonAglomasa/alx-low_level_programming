#include "main.h"

/**
 * cap_string - Capitalizes every word of a string
 *
 * @s: Pointer that returns a string to capitalize every word
 *
 * Return: Returns the modified string
 */
char *cap_string(char *s)
{
	/* Declarations */
	int i;
	int j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
			'{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0  && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}

	return (s);
}
