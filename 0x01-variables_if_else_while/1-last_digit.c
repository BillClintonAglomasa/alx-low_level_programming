#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of program
 *
 * n: A random integer variable
 * last: Holds the last number of n
 *
 * Return: Always 0 (Success)
 *
 * Description: Get a random number and check
 * its last digit, compare it with 5
 * return - 0
 */
int main(void)
{
	/* Declaring variables */
	int n;
	int last;

	/* Initialize variable */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	/* Check and print based on last digit*/
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);

	return (0);
}
