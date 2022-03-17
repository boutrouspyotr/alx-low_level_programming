#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v = 'a';

	while (v <= 'z')
	{
		_putchar(v);
		v++;
	}
	_putchar('\n');

	return (0);
}
