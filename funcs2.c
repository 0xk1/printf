#include "main.h"

/**
 * _strlen - len of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * print_octal - print octal
 * @n: number
 * Return: int
 */

int print_octal(unsigned int n)
{
	int i = 0, j, r;
	char oct[64];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n)
	{
		r = n % 8;
		n = n / 8;
		oct[i] = r;
		i++;
	}

	j = i - 1;

	while (j >= 0)
	{
		_putchar(oct[j] + '0');
		j--;
	}
	return (i);
}

/**
 * print_hex - print hex
 * @n: number
 * @base: base
 * Return: int
 */
int print_hex(unsigned int n, char base)
{
	int i = 0, j, r;
	char hex[64];
	char *hex_s = "0123456789abcdef";
	char *hex_b = "0123456789ABCDEF";

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n)
	{
		r = n % 16;
		n = n / 16;
		hex[i] = r;
		i++;
	}
	j = i - 1;

	while (j >= 0)
	{
		if (base == 'x')
			_putchar(hex_s[(int)hex[j]]);
		else if (base == 'X')
			_putchar(hex_b[(int)hex[j]]);
		j--;
	}
	return (i);
}





















