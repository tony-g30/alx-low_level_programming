#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int c = 0;

	strrev(s);

	while (s[c] != '\0')
	{
		putchar(*s++);
		putchar('\n');
	}
}
