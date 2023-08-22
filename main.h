#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int myputchar(char character);
int put_str(char *string);
int _printf(const char *format, ...);

/* specifiers */
void c_specifier(char c);
int  str_specifier(char *str);
void percent_spcfr(void);
int print_integer(int value);
#endif
