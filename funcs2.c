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
int dec_to_base(unsigned long int n, char base)
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

/**
 * print_pointer - function that print ponter
 * @p: ponter
 * Return: number of bytes written
 */

int print_pointer(void *p)
{
	int i = 0;
	long int n;

	if (!p)
	{
		i += _puts("(nil)");
		return (i);
	}

	n = (unsigned long int)p;
	i += _puts("0x");
	i += dec_to_base(n, 'x');
	return (i);
}

/**
 * _rev_str - print reversed string
 * @s: string
 * Return: number of bytes written
 */

int _rev_str(char *s)
{
	int i = 0;
	int len;

	if (!s)
		s = "(null)";

	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
		i++;
	}

	return (i++);
}
/**
 * buffer - local buffer of 1024
 * @c: char
 * Return: 1
 */

int buffer(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffer, i);
		i = 0;
	}

	if (c != -1)
		buffer[i++] = c;

	return (1);
}
