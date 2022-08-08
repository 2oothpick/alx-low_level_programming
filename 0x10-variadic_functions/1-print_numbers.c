#include "variadic_function.h"
/**
 * print_numbers - prints numbers given as arrguments
 * @separator: string printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (!separator)
{
printf("%d", va_arg(ap, int));
}
else if (separator && i == 0)
{
printf("%d", va_arg(ap, int));
}
else
{
printf("%s%d ", separator, va_arg(ap, int));
}}
printf("\n");
va_end(ap);
}
