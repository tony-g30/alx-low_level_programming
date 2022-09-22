#include "main.h"
#include<stdio.h>
/**
*function that capitalises all words in a given string
*cap_string - function that capitalises all words in a string
*Return: character value
*@s: pointer to str
*
*/
char *cap_string(char *s)
{
	int a = 0, i, cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
