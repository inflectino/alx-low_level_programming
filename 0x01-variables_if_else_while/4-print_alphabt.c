#include <stdio.h>
/**
 * main - Print alphabet exept q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc == 'q' || lc == 'e')
		{
			continue;
		}
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
