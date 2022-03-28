#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char h;

	int v = 0;

	while (v < 10)
	{
		h = 'a';
		while (h <= 'z')
		{
			_putchar(h);
			h++;
		}
		_putchar('\n');
		v++;
	}
}
