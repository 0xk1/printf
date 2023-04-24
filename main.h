#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _puts(char *s);
int print_int(int n);
int _printf(const char *format, ...);
int helper(char c, va_list args, int count);
int print_binary(unsigned int n);
int print_unsd(unsigned int n);
int _strlen(char *s);
int print_octal(unsigned int n);
int dec_to_base(unsigned int n, char base);

#endif
