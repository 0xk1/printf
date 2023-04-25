#include "main.h"

/**
 * spec_string - handle non printable chars
 * @s: string
 * Return: number of bytes written
 */
int spec_string(char *s)
{
	int i = 0;
	int len = 0;

	if (!s)
	{
		return (_puts("(null)"));
	}

	while (s[i])
	{
		if (is_printable(s[i]))
		{
			_putchar(s[i]);
			len++;
		}
		else
		{
			len += _puts("\\x");
			if (s[i] <= 5)
				len += _putchar('0');
			len += dec_to_base(s[i], 'X');
		}
		i++;
	}
	return (len);
}
