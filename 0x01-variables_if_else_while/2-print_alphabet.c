#include <stdio.h>
/**
 * main - lower case
 *
 * Return: 0 on success
 */
int main(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
