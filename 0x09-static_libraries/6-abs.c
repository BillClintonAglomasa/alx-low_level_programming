#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @num: The num to check
 *
 * Return: Always 0
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
