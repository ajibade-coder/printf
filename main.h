#ifndef main_h
#define main_h

/* c libaries */
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(int c);
char *_int_to_str(int num);
int handle_s(char c, char *str);
int handle_S(char *str);
int dec_to_hex(char c, unsigned int num);
int rot13(char *s);
char *_uint_to_str(unsigned int num);
int handle_u(char c, unsigned int num);
int handle_oct(unsigned int num);
int handle_bin(unsigned int num);
int handle_r(char c, char *str);
int handle_non_spec(char c);
int len_of_str(int num);
int handle_d(int num);

#endif
