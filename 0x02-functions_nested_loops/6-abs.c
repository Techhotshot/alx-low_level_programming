#include "main.h"

/**
 * _abs - this function prints absolute value
 *
 * @a: this is the parameter to be considered
 *
 * Return: this prints a when successful
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
