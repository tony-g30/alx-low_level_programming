#include "main.h"
/**
*reverse_array -> reverses contents of an array
*Return: void
*@a: pointer to array a[]
*@n: size of each element in array a[]
*/
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
		p++;
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
