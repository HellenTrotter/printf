#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
*_printf- produces output according to a format
*@format :string of characters
*Return : return the number of characters printed excluding null
*/

int _printf(const char *format, ...)
{
va_list my_arguments;
int i;
char *s;
int count_mychar = 0;

va_start(my_arguments, format);
for (i = 0; (format[i] != '\0'); i++)
{
if (format[i] != '%')
{
putchar(format[i]);
count_mychar = strlen(format);
}
else
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
count_mychar = strlen(s);
}
}

}
va_end(my_arguments);
return (count_mychar);
}
