#include "main.h"
#include <unistd.h>


/**
 * _printf - produces output according to a format.
 * @format: character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int len, i;
	char ch;

	i = 0;
	while (format[i] != '\0')
	{
		len++;
		i++;
	}
	for (i =0; i < len; i++)
	{
		ch = format[i];
		write(1,&ch, 1);
	}
	return (len);
}
