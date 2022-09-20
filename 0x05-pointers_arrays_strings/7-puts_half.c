#include "main.h"
#include<stdio.h>
/**
 *puts_half - prints last half of string
 *@str: the string to be printed
 *return: void
 *
 *
 */
void puts_half(char *str)
{
	int n, a;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 1)
	{
		a = n - 1 / 2;
		a += 1;
	}
	else
	{
		a = n / 2;
	}

	for (; a < n; a++)
	{
		putchar(str[a]);
	}
}
