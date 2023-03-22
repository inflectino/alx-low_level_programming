#include "main.h"
/**
 * main - Alphabets
 *
 * Print Alphabets using _putchar
 *
 * Return: 0 Alwyas
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
