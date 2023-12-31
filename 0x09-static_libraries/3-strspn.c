#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 *
 * @s: String to evaluate
 * @accept: String containing the list of characters to match in s
 *
 * Return: The number of bytes in the initial segment of s which consist of
 * bytes to accept
 */
unsigned int _strspn(char *s, char *accept)
{
	/* Declaration */
	int i;
	int j;
	int f;
	int flag;

	/* Initialization */
	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}

		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
