#include "function_pointers.h"
#include <stdio.h>
/* Print name using function pointers
 * Return nothing due to void
 */
void print_name(char *name, void (*f)(char *)){
if (name == NULL || f == NULL )
	return;

f(name);
}
