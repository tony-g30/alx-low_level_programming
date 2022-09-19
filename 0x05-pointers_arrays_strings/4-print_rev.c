#include "main.h"
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
