#include <stdio.h>
/**
 * main - Alphabets
 *
 * Return: 0 on success
 */
int main(void)
{
	int lc;
	int uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}

	putchar('\n');
	return (0);
}
