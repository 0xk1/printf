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
 * dec_to_base - print hex
 * @n: number
 * @base: base
 * Return: int
 */
int dec_to_base(unsigned int n, char base)
{
	int i = 0, j, r;
	char num[64];
	int bs;
	char *hex_s = "0123456789abcdef";
	char *hex_b = "0123456789ABCDEF";

	if (base == 'b')
		bs = 2;
	else if (base == 'o')
		bs = 8;
	else
		bs = 16;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n)
	{
		r = n % bs;
		n = n / bs;
		num[i] = r;
		i++;
	}
	j = i - 1;

	while (j >= 0)
	{
		if (base == 'x')
			_putchar(hex_s[(int)num[j]]);
		else if (base == 'X')
			_putchar(hex_b[(int)num[j]]);
		else
			_putchar(num[j] + '0');
		j--;
	}
	return (i);
}





















