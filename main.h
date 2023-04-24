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
int print_unsd(unsigned int n);
int _strlen(char *s);
int dec_to_base(unsigned long int n, char base);
int is_printable(char c);
int print_pointer(void *p);
int _rev_str(char *s);
int buffer(char c);

#endif
