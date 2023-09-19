#include "main.h"
#include <stdarg.h>
/**
 * my_printf - produces output according to a format.
 * @format: is a character string
 * Return: number of characters
 */
int my_printf(const char *format, ...);
int my_printf(const char *format, ...)
{
	const char *s = format;
	int i;
	int k;
	char str[12];

	va_list arg;

	va_start(arg, format);

	while (*s != '\0')
	{
		if (*s != '%')
		{
			write(1, s, 1);
			s++;
		}
		else
		{
			s++;
			if (*s == 'd' || *s == 'i')
			{
				int j = va_arg(arg, int);

				if (j == 0)
				{
					str[k++] = '0';
				}
				else
				{

				if (j < 0)
				{
					str[k++] = '-';
					j = -j;
				}

				while (j > 0)
				{
					str[k++] = '0' + (j % 10);
					j /= 10;
				}
				}

				str[k] = '\0';

				for (i = 0; i < k / 2; i++)
				{
					char tmp = str[i];

					str[i] = str[k - 1 - i];
					str[k - 1 - i] = tmp;
				}

				write(1, str, k);
				s++;
			}
		}
		write(1, s - 1, 2);
		s += 2;

	}
	va_end(arg);
	return (0);
}

