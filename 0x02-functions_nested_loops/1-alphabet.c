#include "main.h"
/**
 * main - Alphabets
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
