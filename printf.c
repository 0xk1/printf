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
	if (c == 'c')
		count += _putchar((char)va_arg(args, int));
	else if (c == 's')
		count += _puts(va_arg(args, char*));
	else if (c == 'S')
		count += spec_string(va_arg(args, char *));
	else if (c == '%')
		count += _putchar('%');
	else if (c == 'd' || c == 'i')
		count += print_int(va_arg(args, int));
	else if (c == 'u')
		count += print_unsd(va_arg(args, unsigned int));
	else if (c == 'b' || c == 'o' || c == 'x' || c == 'X')
		count += dec_to_base(va_arg(args, unsigned int), c);
	else if (c == 'p')
		count += print_pointer(va_arg(args, void *));
	else if (c == 'r')
		count += _rev_str(va_arg(args, void *));
	else if (c == 'R')
		count += rot13(va_arg(args, char *));
	else
	{
		count += _putchar('%');
		count += _putchar(c);
	}
	return (count);
}

/**
 * _printf - function that printed a formatted string to standart output
 * @format: format will be printed
 * Return: total number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

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
