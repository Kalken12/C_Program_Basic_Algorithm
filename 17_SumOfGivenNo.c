/*
17. Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
Expected Output:

29
30
39
30
*/
#include <stdio.h>
#include <stdlib.h>
int test(int,int);
int main()
{
	printf("%d\n",test(10,19));
	printf("%d\n",test(10,10));
	printf("%d\n",test(20,19));
	printf("%d\n",test(11,8));
	return 0;
}
int test(int a, int b)
{
	
	if(a+b>=10 && a+b<=20)
	{
		return 30;
	}
	return a+b;
}

