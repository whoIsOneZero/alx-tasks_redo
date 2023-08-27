#include <stdarg.h>

/**
 * sum_them_all - sums up parameters
 * @n: number of parameters
 * @...: variable parameters
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum, num_args;

	sum = 0;
	num_args = n;

	va_start(args, n);

	for (i = 0; i < num_args; i++)
	{
		int x = va_arg(args, int);

		sum = sum + x;
	}
	va_end(args);

	return (sum);
}
