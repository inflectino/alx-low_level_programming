#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Last digit
 *
 * Return: 0 on success, non-zero on failure
 */

int main(void)
{
	int n;
	char l;

	l = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %c and is greater than 5\n", n, l);
	} else if (n == 0)
	{
		printf("Last digit of %d is %c and is 0\n", n, l);
	} else
	{
		printf("Last digit of %d is %c and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
