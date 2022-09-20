#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 *print_rev -> prints string in reverse
 *
 */
void print_rev(char *s)
{
	int c = 0;

	strrev(s);

	while (s[c] != '\0')
	{
		c++;
	}
	for (c = c-1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
