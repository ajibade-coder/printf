#include "main.h"

/**
* _printf - same funcction as using printf, this is user-defined
* @format: format with specifiers
* Return: returns the number of string printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
		return (count);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c' || *format == '%')
				count += *format == 'c' ? _putchar(va_arg(args, int)) : _putchar(*format);
			else if (*format == 's' || *format == 'S')
				count += handle_s(*format, va_arg(args, char *));
			else if (*format == 'd' || *format == 'i')
				count += handle_d(va_arg(args, int));
			else if (*format == 'u' || *format == 'o')
				count += handle_u(*format, va_arg(args, unsigned int));
			else if (*format == 'b')
				count += handle_bin(va_arg(args, unsigned int));
			else if (*format == 'r' || *format == 'R')
				count += handle_r(*format, va_arg(args, char *));
			else if (*format == 'x' || *format == 'X')
				count += dec_to_hex(*format, va_arg(args, int));
			else
				count += handle_non_spec(*format);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
