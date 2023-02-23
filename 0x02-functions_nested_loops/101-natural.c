#include <stdio.h>

/**
 * main - this is the main function
 * Return: this prints 0 when successful
 */

int main(void)
{
	int i;
	int sun;

	sun = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sun = sun + i;
		}
	}
	printf("%d\n", sun);
	return (0);
}
