#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
*_printf- produces output according to a format
*@format :string of characters
*Return: return number of characters printed
*/
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
va_list my_arguments;
int i;
char *s;
int count_mychar = 0;
const char invalid_char[] = "abghjkmnqrtvwyz!]90123456789[)(";
char specifi = '\0';
va_start(my_arguments, format);
if (format == NULL)
{
va_end(my_arguments);
return (-1);
}

for (i = 0; (format[i] != '\0'); i++)
{
	if (format[i] == '%')
	{
	i++;
	if (format[i] == 'c')
	{
	int c = va_arg(my_arguments, int);
	char ch = (char)c;
	
	write(1, &ch, 1);
	count_mychar++;
	}
	else if (format[i] == ' ')
	{
	return (-1);
	}
	else if (format[i] == '\0')
	{
	return (-1);
	}
	else if (format[i] == 's')
	{
	s = va_arg(my_arguments, char *);
	if (s != NULL)
	{
	size_t len;
	size_t maxChunkSize;
	size_t chunkSize;
	size_t j;
	
	len = strlen(s);
	maxChunkSize = 50;
	chunkSize = (len < maxChunkSize) ? len : maxChunkSize;
	for (j = 0; j < len; j += chunkSize)
	{
	size_t remaining;
	size_t currentChunkSize;
	
	remaining = len - j;
	currentChunkSize = (remaining > chunkSize) ? chunkSize : remaining;
	write(1, s + j, currentChunkSize);
	count_mychar += currentChunkSize;
	}
	}
	else
	{	
	write(1, "(null)", 6);
	count_mychar += 6;
	}
	}
	else if (strchr(invalid_char, format[i]) != NULL)
	{
	char invalid_chars = format[i];
	
	specifi = format[i - 1];
	if (specifi != '\0')
	{
	write(1, &specifi, 1);
	count_mychar++;
	specifi = '\0';
	write(1, &invalid_chars, 1);
	count_mychar++;
	}
	}
	else if (format[i] == 'd' || format[i] == 'i')
	{
	int d = va_arg(my_arguments, int);
	char buffer[12];
	
	sprintf(buffer, "%d", d);
	write(1, buffer, strlen(buffer));
	count_mychar += strlen(buffer);
	}
	else if (format[i] == '%')
	{
	char symbol = '%';
	
	write(1, &symbol, 1);
	count_mychar++;
	}
	}
	else
	{
	write(1, &format[i], 1);
	count_mychar++;
	}
	}
	va_end(my_arguments);
	return (count_mychar);
}

