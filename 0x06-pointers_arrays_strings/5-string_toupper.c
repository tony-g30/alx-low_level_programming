#include "main.h"
/**
*string_toupper -> change all lowercase of a string to uppuercase
*@c: string parameter
*Return: string
*/
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
