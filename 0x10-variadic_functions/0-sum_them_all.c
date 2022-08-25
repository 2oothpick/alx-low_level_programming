#include "variadic_functions.h"

/**
 * sum_them_all - sums up all integers given
 * and returns the resulting sum
 * @n: number of arguments passed to the function
 * Return: value of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum = 0;
va_start(ap, n);

for (i = 0; i <  n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
