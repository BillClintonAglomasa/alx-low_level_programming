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
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
