#include "main.h"


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
	default:
		count += _putchar(c);
		break;
	}
	return (count);
}


int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while(*format)
	{
		if (*format == '%')
		{
			format++;
			count += helper(*format, args, count);
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}
	va_end(args);
	return(count);
}
