#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: always 0 (success)
 */
int main(void)
{
char a;
char b;

a = 48;
b = 97;

while (a <= 57)
{
putchar (a);
a++;
}
while (b <= 102)
{
putchar (b);
b++;
}
putchar ('\n');
return (0);
}
