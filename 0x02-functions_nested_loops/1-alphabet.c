#include "main.h"
/**
 * print_alphabet - this function prints in lowercase
 *
 * Return: this prints 0 when successful
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
