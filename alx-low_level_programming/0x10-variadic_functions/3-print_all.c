#include "variadic_functions.h"
/**
 * print_all - prints arguments of any data type
 * @format: a list of format specifiers
 */
void print_all(const char * const format, ...)
{
	char *str, *sp = "";
	int i = 0;
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char*);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue; /*Case*/
			}
			sp = ", ";
			i++; /*Next iteration*/
		}
	}
	printf("\n");
	va_end(args);
}
