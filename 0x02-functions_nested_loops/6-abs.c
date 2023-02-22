#include "main.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @n: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int n)
{
	int a = n % 10; 

	if (a < 0)
		a *= -1;

	_putchar(a + '0');

	return (0);
}
