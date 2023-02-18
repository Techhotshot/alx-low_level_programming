#include <stdio.h>

/**
 * main - this function prints alphabet in lowercase
 *
 * Return: this prints 0 if successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
