#include "main.h"

/**
 * _islower - functions prints alphabets in lowercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 if is a lowercase and  this prints 0 if the condtion is otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
