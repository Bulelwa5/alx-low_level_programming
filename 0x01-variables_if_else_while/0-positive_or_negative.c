#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to variable n which stores integers
 * it executes, and prints it
 */

int main(void)
{
	int n ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d id negative\n", n);
	return (0);
}
