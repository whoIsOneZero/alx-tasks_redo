#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed b/n numbers
 * @n: the numbers of arguements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (separator == NULL || (i == n - 1))
		{
			printf("%d", x);
		}
		else
			printf("%d%s", x, separator);
	}

	va_end(args);
	printf("\n");
}
