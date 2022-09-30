#include<stdio.h>
/**
*main: this is the main function that prints the no. of arguments
*@argc: represents no. of arguments
*@argv: coontains array of the arguments
*Return: returns 0 if successful
*/
int main(int argc, char *argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
