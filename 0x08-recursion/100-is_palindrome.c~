#include "main.h"
#include <stdio.h>

int base_prime(int n, int i);
/**
 * _is_prime_number - Confirms if an integer i a prime or not.
 *
 * @n: The number to prime number.
 *
 * Return: 1 if n is a prime, 0 if it is not so.
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}

	else
	{
		return (base_is_prime_number(n, n -1);
	 }
}

/**
 * base_is_prime_number - Calculates if a number is prime recursively.
 *
 * @n: The number to ecaluate.
 * @i: The iterator in the recursive function
 *
 * Return: 1 if n is a prime, 0 if not.
 */
int base_is_prime_number(int n, int i)
{
	if (n == 1)
	{
		return (1);
	}

	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (base_is_prime_number(n, i + 1));
	}
}
