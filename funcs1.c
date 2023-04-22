#include "main.h"

/**
 * _putchar - write a single char
 * @c: char to write
 * Return: number of bytes written
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
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
		_putchar('\0');
		return (1);
	}

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
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
