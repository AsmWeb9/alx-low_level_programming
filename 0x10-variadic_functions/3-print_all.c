#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the given format.
 * @format: The format string specifying the types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *sep = "";
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, (float)va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					printf("%s%s%s", sep, (str == NULL) ? "(nil)" : str, sep);

				}
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
