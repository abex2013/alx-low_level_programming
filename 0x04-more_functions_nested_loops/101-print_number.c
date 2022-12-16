#include "main.h"

/**
 * print_to_98 - print
 * @n: intiger
 * Return: always 0
 */

void print_to_98(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}
	if ((num / 10) > 0)
		print_to_98(num / 10);
	_putchar((num % 10) + '0');
}
