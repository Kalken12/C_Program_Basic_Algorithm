/*
29. Write a C program to compute the sum of three given integers. If the two values are same return the third value. 
Expected Output:

16
23
12
18
*/
#include <stdio.h>
#include <stdlib.h>
int test(int, int, int);
int main()
{
	printf("%d\n", test(16,20, 20));
	printf("%d\n",test(23,15,15));
	printf("%d\n",test(15,12,15));
	printf("%d\n",test(35,35,18));
	return 0;

	
}
int test(int x,int y ,int z)
{
	int num;
	if(x==y)
	{
		return z;
	}
	else if(y==z)
	{
		return x;
	}
	else if(z==x)
	{
		return y;
	}
}
