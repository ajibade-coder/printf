#include "main.h"
/**
 * c_specifier - func that handles %c  format
 * @c: 2nd parameter
 * Return: void
 */

void  c_specifier(char c)
{
	myputchar(c);
}

/**
 * str_specifier - func that handles %s format
 * @str: 2nd parameter for string
 * Return: void
 */
int  str_specifier(char *str)
{
	int string_len;

	string_len = put_str(str);
	return (string_len - 1);
}
/**
 * percent_spcfr - func that handles %% format
 * Return: void
 */

void percent_spcfr(void)
{
	myputchar('%');
}
