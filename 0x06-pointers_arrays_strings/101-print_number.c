#include "main.h"
#include<stdio.h>
/**
*print_number -> function that prints integers
*@n: numbers to print
*Return: void
*/
void print_number(int n)
{
	int x;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	x = n;

	if (x / 10)
	print_number(x / 10);
}
