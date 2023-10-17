#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 1 if c is a letter otherwise 0 instead.
 */
int main(void)
{
	/* Declaration */
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
