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
if (format == NULL || (strcmp(format, "%") == 0 && format[1] == '\0'))
{
va_end(my_arguments);
return (-1);
}

for (i = 0; (format[i] != '\0'); i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
{
int c = va_arg(my_arguments, int);
char ch = (char)c;
write(1, &ch, 1);
count_mychar++;
break;
}
case 's':
{
s = va_arg(my_arguments, char *);
if (s != NULL)
{
write(1, s, strlen(s));
count_mychar += strlen(s);
}
else
{
write(1, "(null)", 6);
count_mychar += 6;
}
break;
}
case'%':
{
char symbol = '%';
write(1, &symbol, 1);
count_mychar++;
break;
}
default:
va_end(my_arguments);
return (-1);
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
