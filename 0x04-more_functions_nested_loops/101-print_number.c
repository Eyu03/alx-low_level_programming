#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int nl;

	if(n < 0)
	{
		nl = -n;
		putchar('-');
	}
	else
	{
		nl = n;
	}

	if (nl / 10)
	{
		print_number(nl / 10);
	}

	putchar(nl % 10) + '0';
}
