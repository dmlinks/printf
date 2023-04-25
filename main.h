#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_string(char *str);
int print_number(int num);
void _putchar(char c);

#endif
