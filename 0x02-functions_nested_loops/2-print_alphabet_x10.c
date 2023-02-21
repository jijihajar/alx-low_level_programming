#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * return: 0
 */
void print_alphabet_x10(void)
{
	int a, b;

	b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{

			_putchar(a);
		}
		b++;
		_putchar('\n');
	}
}

