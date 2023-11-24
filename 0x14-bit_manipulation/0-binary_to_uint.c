#include <stddef.h>
#include "main.h"

/**
 * check_valid_string - Checks if a string has only 0's and 1's
 * @b: String to be checked
 *
 * Return: Return 1 if string is valid, 0 otherwise
 */
int checking_valid_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}

	return (1);
}


/**
 * binary_to_uint - Converts a binary to an unsigned int
 * @b: The binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (!checking_valid_string(b))
		return (0);
	while (b[str_len] != '\0')
		str_len++;
	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}

	return (decimal);
}
