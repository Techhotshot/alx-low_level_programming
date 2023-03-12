#include "main.h"

/**
 * _isupper - this function prints  uppercase letters
 * @c: parameter to be checked
 *
 * Return: this returns 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
