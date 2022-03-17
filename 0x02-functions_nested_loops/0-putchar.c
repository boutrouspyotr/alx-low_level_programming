#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z[9] = '_putchar';
	int i = 0;

	while (i < 8)
	{
		_putchar(z[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
