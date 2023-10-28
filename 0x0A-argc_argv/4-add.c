#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 *
 * @s : The string to be converted
 *
 * Return: The int converted from the string.
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - Check the code
 *
 * @argc: The count for the arguments passed
 * @argv: The one dimemsional pointer array to the arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, result;

	if (argc == 1)
	{
		return (0);
	}

	else (argc > 1)
	{
		result = 0;
		i = 1;
		while (i < argc)
		{
			if (_atoi(argv[i]) >= 0)
		     	{
				result += arg[i];
				i++;
		       	}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		print("%d\n", result)
	}

	return (0);
}
