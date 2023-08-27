#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed b/n strings
 * @n: the numbers of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char* x = va_arg(args, char*);

		if (x == NULL)
			x = "(nil)";
		if (separator == NULL || (i == n - 1))
		{
			printf("%s", x);
		}
		else
			printf("%s%s", x, separator);
	}

	va_end(args);
	printf("\n");
}
