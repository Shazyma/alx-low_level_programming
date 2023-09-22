#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		_putchar(45);
		a = -n;
	}
	if (a / 10)
		print_number(a / 10);
	_putchar((x % 10) + '0');
}
