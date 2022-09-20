#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to be modified
 *
 *return - void
 */
void rev_string(char *s)
{
	char *a, x;
	int c = 0, k, i;

	a = s;

	while (s[c] != '\0')
		c++;
	for (k = 1; k < c; k++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		x = s[i];
		s[i] = *a;
		*a = x;
		a--;
	}
}
