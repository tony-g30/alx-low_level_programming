#include "main.h"
/**
*_strcmp -> compares pointers to two strings
*@s1: pointer to first string to be compared
*@s2:pointer to second string to be compared
*
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1==*s2)
	{
		s1++;
		s2++;
	}
	return (*s1 -*s2);
}
