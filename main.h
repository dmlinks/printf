#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_string(va_list args);
int print_number(va_list args);
int _putchar(char c);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_octal(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args)
int print_char(va_list args);
int print_binary(va_list args, int count);

#endif
