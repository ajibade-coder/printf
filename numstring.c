#include "main.h"

/**
* _int_to_str - changes integer to string
* @num: number to change to string
*
* Return: returns pointer to string
*/

char *_int_to_str(int num)
{
	char *str = (char *)malloc(11);

	if (str == NULL)
		return (NULL);
	sprintf(str, "%d", num);
	return (str);
}

/**
* dec_to_hex - change from decimal to hexadecimal
* @c: specifier
* @num: the decimal number
*
* Return: return the number of chars printed
*/

int dec_to_hex(char c, unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		count = _putchar('0');
		return (count);
	}
	if (!num)
		return (0);
	count += dec_to_hex(c, num / 16);
	if (num % 16 < 10)
		count += _putchar('0' + num % 16);
	else if (num % 16 > 9 && c == 'x')
		count += _putchar(87 + num % 16);
	else
		count += _putchar(55 + num % 16);
	return (count);
}

/**
* handle_u - this handles the printing of unsigned int
* @num: the unsigned int
* @c: specifier
* Return: returns the length of printed num.
*/

int handle_u(char c, unsigned int num)
{
	int i;
	char *str;

	i = 0;
	if (c == 'o')
	{
		i = handle_oct(num);
		return (i);
	}
	str = _uint_to_str(num);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);
}
