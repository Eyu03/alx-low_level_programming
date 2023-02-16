#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * Return: 0
 */
int main(void)
{
char c;
int i;
long int d;
long long int a;
float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of long long  int: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));

return (0);
}
