#include "variadic_functions.h"

/* print_numbers - print intergers
 * @seperator: string to be printed between numbers
 * @n: number of integers to print
 * return: void 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list ptr;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, const unsigned int);
	       printf("%d", arr); 
	 if (i != (n-1) && separator != NULL )
	   printf("%s", separator);	 
	}
	printf("\n");
	va_end(ptr);
}
