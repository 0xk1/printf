#include "main.h"

int _putchar (char c)
{
	return (write(1, &c, 1));
	return (1);
}


int _puts(char *s)
{
	int i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}

	return (i);
}



int print_int(int n)
{
	int i = 0;

	if (n < 0)
	{
		i += _putchar('-');
		if (n == -2147483648)
		{
			i+= _putchar('2');
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
