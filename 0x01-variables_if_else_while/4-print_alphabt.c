#include <stdio.h>

/**
 * main - this function prints alphabets in lowercase
 *
 * Return: this prints 0 when successful
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
