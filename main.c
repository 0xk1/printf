#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	char *str = "dynamic string";

	len = _printf("Let's %% %c \' tyr to printf a simple sentence.\n", "\0");
	len2 = printf("Let's %% %c \' try to printf a simple sentence.\n", "\0");
	_printf("Length:[%d, %i]\n", len, len);
	ui = (unsigned int)INT_MAX + 1024;
	_printf("%c\n", 'H');
	_printf("%c\n", 65);
	_printf("%c\n", '\n');
	_printf("%s\n", "Hello, world!");
	_printf("%s\n", "This is a test.");
	_printf("%s\n", str);
	_printf("%%\n");
	_printf("%%%\n");
	_printf("%c%s%%\n", 'H', "ello, world!");
	_printf("%s\n", NULL);
	_printf("%s\n", NULL);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("%o %x\n", 0, 0);
	printf("%o %x\n", 0, 0);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
