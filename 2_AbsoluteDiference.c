/*
2.Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference. 
Expected Output:

6
21
0
*/
#include <stdio.h>
int test(int);
int main(void)
{
	printf("%d\n",test(53));
	printf("%d\n",test(30));
	printf("%d\n",test(51));
	
}
int test(int n)
{
	int x=51;
	if(n>51)
	{
		return (n-x)*3;
	}
	return x-n;
}
