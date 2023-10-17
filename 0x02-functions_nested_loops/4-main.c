#include "main.h"

/**
 * main - check the code
 *
 * Return: 1 if c is a letter otherwise 0 instead.
 */
int main(void)
{
	/* Declaration */
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
