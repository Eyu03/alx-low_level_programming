#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * Return: 0
 */
int main(void)
{
char c;
int i;
long int l;
long long int a;
float f;

printf("The size of an char is: %lu.\n", (unsigned long)sizeof(c));
printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
printf("The size of an long int is: %lu.\n", (unsigned long)sizeof(l));
printf("The size of an long long int is: %lu.\n", (unsigned long)sizeof(a));
printf("The size of an float is: %lu.\n", (unsigned long)sizeof(f));

return (0);
}
