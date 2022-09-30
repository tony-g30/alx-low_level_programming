#include <stdio.h>
/**
*Main -> this is the main function that prints the program name
*@argc: represents no. of arguments
*@argv: coontains array of the arguments
*Return: returns 0 if successful
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	printf("%s\n", argv[i]);

	return (0);
}
