#include "main.h"
/**
 * print_sign - prints the sign of the integer
 *
 * @n : is the integer
 *
 * Return: 0
 */
int print_sign(int n)
{
	int p;

	if (n > 0)
	{
		p = 1;
		_putchar('+');
	}
	else if(n == 0)
	{
		p = 0;
		_putchar('0');
	}
	else
	{
		p = -1;
		_putchar('-');
	}
	return (p);
}
