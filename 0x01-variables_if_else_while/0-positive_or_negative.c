#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Positive anything is better than negative nothing
 * Descriptio: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negativr\n", n);
	else
		printf("%i id zero\n", n);
	return (0);
