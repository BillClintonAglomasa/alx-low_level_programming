#include <stdio.h>

/**
 * main - Check the code
 *
 * @argc: The count for the arguments passed
 * @argv: The one dimemsional pointer array to the arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	int num;

	num = argc - 1;
	printf("%d\n", num);

	return (0);
}
