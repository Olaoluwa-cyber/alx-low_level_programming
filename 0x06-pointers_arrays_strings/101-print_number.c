#include "main.h"
#include <stdio.h>

/**
 * print_number - function to print int
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n1 < 0)
	{
		putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
		print_number(n1 / 10);
	putchar(n1 % 10 + '0');
}