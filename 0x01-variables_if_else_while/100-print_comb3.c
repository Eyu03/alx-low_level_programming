#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{
	int c = '0';
	int d = '0';

	while (c <= '9')
	{
		while (d <= '9')
		{
			if (!(c > d || c == d))
			{
				putchar(c);
				putchar(d);
				if (c == '8' && d == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		d = '0';
		c++;
	}
	return (0);
}
