#include "main.h"
/**
 * puts_half - Prints out the first half of a string.
 * @str: input string to print.
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = (i - 1) / 2; j < i - 1; i++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
