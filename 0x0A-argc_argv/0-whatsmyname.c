#include <stdio.h>

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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
