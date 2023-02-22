#include "main.h"
#include <stdio.h>
/**
 * print_sign - this function prints signs
 *
 * @n: function parameter
 *
 * Return: this  prints 1, 0 and -1 when successful
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
