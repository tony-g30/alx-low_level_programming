#include<stdio.h>
/*
 *main function calculates size of various types
 *return function always returns 0 if successful
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%dbyte(s)\n",sizeof(a));
	printf("Size of a int:%dbyte(s)\n",sizeof(b));
	printf("Size of a long int:%dbyte(s)\n",sizeof(c));
	printf("Size of a charlong long int:%dbyte(s)\n",sizeof(d));
	printf("Size of a float:%dbyte(s)\n",sizeof(e));

	return (0);
}
