#include "main.h"
#include<stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: the string to be affected
 * return: void
 */
void puts2(char *str)
{
	int n = 0;
	int c;

	while (str[n] != '\0')
	{
		n++;
	}

	for (c = 0; c < n; c += 2)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
