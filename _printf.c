#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: is a constant  character string
 * Return: if format string equal NULL return -1,else len.
 */
int _printf(const char *format, ...)
{
	int len = 0;
	int index;
	va_list arguements;

	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(arguements, format);

	for (index = 0 ; format[index] != '\0' ; index++)
	{
		if (format[index] != '%')
			myputchar(format[index]);
		else
		{
			if (format[index + 1] == 'c')
				c_specifier(va_arg(arguements, int));
			else if (format[index + 1] == 's')
				len += str_specifier(va_arg(arguements, char *));
			else if (format[index + 1] == '%')
				percent_spcfr();
			else if (format[index + 1] == 'd' || format[index + 1] == 'i')
				len += (print_integer(va_arg(arguements, int) - 1);
			index++;
		}
		len++;
	}
	va_end(arguements);
	return (len);
}
