#include "main.h"
#include <stdarg.h>
/**
 * _printf- prints formatted output
 * @format: Format string describing all inputs
 *
 * Return: Length of Characters printed
 */
int _printf(const char *format, ...)
{
	int len;
	va_list a;
	char cval;
	char *sval;

	while (*format)
	{

		if (*format != '%')
		{
			_putchar(*format);
			len++;
			format++;
			continue;
		}
		switch (*++format)
		{
			case 'c':
			       cval = (char) va_arg(a, int);
			       _putchar(cval);
			       len++;
			       break;
			case 's':
			       sval = va_arg(a, char *);
			       while (*sval++)
			       {
				       _putchar(*sval);
				       len++;
			       }
			       break;
			case '%':
			       _putchar('%');
			       len++;
			       break;
		}
		format++;
	}
	va_end(a);
	return (len);
}
