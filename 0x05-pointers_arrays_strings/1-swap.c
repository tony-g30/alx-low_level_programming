#include "main.h"
/**
 *swap_int -> swapsthe value of two integers
 *@a:pointer to a
 *@b:pointer to b
 *return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
