#include "variadic_functions.h"
/*
 * print_all: prints any argument provided to function
 * @format: the argument specifier
 * Return: any argument given based on format specifier
 */

void print_all(const char * const format, ...)
{
	int i, check_status;

	char *str;
	va_list spc;

	va_start(spc, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_status = 0;
				break;
			case 'f':
				printf("%d", va_arg(spc, int));
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
				{
				str = "(nil)";
				printf("%s", str);
				}
				break;
			default:
				check_status = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_status == 0)
			printf(" , ");
		i++;
	}
	printf("\n");
	va_end(spc);
}
