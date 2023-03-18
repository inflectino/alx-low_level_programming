#include <stdio.h>
/**
 * main - lower case in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	int lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
