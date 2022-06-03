#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 *
 */
int main(void)
{
	char g = 'z';

	while (g >= 'a')
	{
		putputchar(g);
		g--;
	}
	putchar('\n');
	return (0);
}
