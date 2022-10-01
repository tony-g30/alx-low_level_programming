#include<stdio.h>
#include<stdlib.h>
/**
*main -> this is a function to print the result of multiplication operation
*@argc: represents no. of arguments
*@argv: contains array of the arguments
*Return: returns 0 if successful
*/
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = a * b;
	printf("%d\n", res);

	return (0);
}
