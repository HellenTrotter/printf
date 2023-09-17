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
va_start(my_arguments, format);
if (format == NULL)
{
return (-1);
}
else
{
for (i = 0; (format[i] != '\0'); i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c')
{
int c = va_arg(my_arguments, int);
putchar(c);
count_mychar++;
}
else if (format[i] == 's')
{
s = va_arg(my_arguments, char *);
fputs(s, stdout);
count_mychar += strlen(s);
}
else if (format[i] == '%')
{
putchar('%');
count_mychar++;
}
}
else
{
putchar(format[i]);
count_mychar++;
}
}
}
va_end(my_arguments);
return (count_mychar);
}
