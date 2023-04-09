#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *n;

	i = 1;
	n = (char *) &i;

	return ((int)*n);
}
