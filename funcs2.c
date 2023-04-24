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
