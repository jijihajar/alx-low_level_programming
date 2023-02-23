#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int c;

	for (c = 2; c < x; c++)
	{
		if (x % c == 0)
		{
			x = x / c;
		}
	}
	printf("%ld\n", c);
	return (0);
}
