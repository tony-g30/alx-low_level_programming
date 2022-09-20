#include "main.h"
#include<stdio.h>
/**
 * return: always 0
 * print_array - prints elements of an array
 * @a: points to array
 * @n: represents number of elements to be printed
 */
void print_array(int *a, int n)
{
	int c = 0;
	int len = n;
	int *ar = a;

	for (;c < len;c++)
		printf("%d, ", ar[c]);
}
