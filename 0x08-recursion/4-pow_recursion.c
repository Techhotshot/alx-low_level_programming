#include "main.h"

/**
 * _pow_recursion - this function returns the value of x raised to y
 * @x: value to be assigned power
 * @y: power to be raised
 *
 * Return: result of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
