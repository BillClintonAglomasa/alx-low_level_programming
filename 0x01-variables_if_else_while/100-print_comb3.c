#include <stdlib.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 *
 * Return: Always return 0 (Success)
 *
 * Description: A program that prints all possible different combinations ot the
 * two digits '0'and '1'
 */
int main(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		a = 0;

		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar('0'+b);
				putchar('0'+a);

				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
