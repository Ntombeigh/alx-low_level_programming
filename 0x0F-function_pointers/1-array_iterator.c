#include "function_pointers.h"

/* 
 * @size is the size of the array
 * @action is a pointer to the function you need to use
 * Return nothing since  we're dealing with void data type
 */

void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned  int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
