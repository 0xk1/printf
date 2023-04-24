#include "main.h"

/**
 * _putchar - write a single char
 * @c: char to write
 * Return: number of bytes written
 */
int _putchar (char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * _puts - write string
 * @s: string to write
 * Return: number of char written
 */

int _puts(char *s)
{
	int i = 0;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}


/**
 * print_int - print a number
 * @n: number to write
 * Return: number of bytes written
 */
int print_int(int n)
{
	int i = 0;

	if (n < 0)
	{
		i += _putchar('-');
		if (n == -2147483648)
		{
			i += _putchar('2');
			n %= 1000000000;
		}

		i += print_int(-n);
	}
	else if (n >= 0 && n <= 9)
		i += _putchar(n + '0');
	else
	{
		i += print_int(n / 10);
		i += print_int(n % 10);
	}
	return (i);

}
/**
 * print_binary - function that print the binary of a decimal
 * @n: the number
 * Return: number of bytes written
 */

int print_binary(unsigned int n)
{
	int i = 0, j, r;
	char arr[64];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n)
	{
		r = n % 2;
		n = n / 2;
		arr[i] = r;
		i++;
	}

	j = i - 1;
	while (j >= 0)
	{
		_putchar(arr[j] + '0');
		j--;
	}
	return (i);
}

/**
 * print_unsd - print unsigned number
 * @n: number
 * Return: number of bytes written
 */

int print_unsd(unsigned int n)
{
	int i = 0;
	
	if (n == 0)
		i += _putchar('0');
		
	else if (n <= 9)
		i += _putchar(n + '0');
	else
	{
		i += print_unsd(n / 10);
		i += print_unsd(n % 10);
	}
	return (i);
}



