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
	int e = '0';

	while (c <= '7')
	{
		while (d <= '8')
		{
			while (e <= '9')
			{
				if (c < d && d < e)
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if (!(c == '7' && d == '8' && e == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				e++;
			}
			e = '0';
			d++;
		}
		d = '0';
		c++;
	}
	putchar('\n');
	return (0);
}
