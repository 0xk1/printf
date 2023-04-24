#include "main.h"

/**
 * helper - process a single conversion specifier in the printf format string
 * @c: the conversion specifier character
 * @args: the argument list to extract the value to print from
 * @count: the current character count
 * Return: the updated character count
 */
int helper(char c, va_list args, int count)
{

	switch (c)
	{
	case 'c':
		count += _putchar(va_arg(args, int));
		break;
	case 's':
		count += _puts(va_arg(args, char*));
		break;
	case '%':
		count += _putchar(c);
		break;
	case 'd':
	case 'i':
		count += print_int(va_arg(args, int));
		break;
	case 'u':
		count += print_unsd(va_arg(args, unsigned int));
		break;
	case 'b':
	case 'o':
	case 'x':
	case 'X':
		count += dec_to_base(va_arg(args, unsigned int), c);
		break;
	case '\0':
		return (-1);
	default:
		count += _putchar('%');
		count += _putchar(c);
		break;
	}
	return (count);
}

/**
 * _printf - print a formatted string to standart output
 * @format: the printf format string to use
 * Return: total number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;


	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = helper(*format, args, count);
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}
	va_end(args);
	return (count);
}
