#include <stdio.h>

/**
 * main - this function prints all single digits from base ten
 *
 * Return: this prints 0 when successful
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
