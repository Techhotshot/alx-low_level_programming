#include <stdio.h>

/**
 * main - this function prints the alphabets in lowercase and in reverse
 *
 * Return: this prints 0 when successful
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
