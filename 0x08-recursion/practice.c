#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * simple_print_buffer - Prints buffer in hexa
 *
 * @nb: The integer parameter
 *
 * Return: Always 0.
 */
void print(void)
{
	char a[11] = "thisislove";

	printf("16th character is %p", (a + 17));
}

int main(void)
{
	print();
	return (0);
}
