/*
30. Write a C program to compute the sum of the three integers. If one of the values is 13 then do not count it and its right towards the sum.
Expected Output:

16
23
10
0
*/
#include <stdio.h>
#include <stdlib.h>
int test(int , int, int);
int main()
{
	printf("%d\n",test(4,8,4));
	printf("%d\n",test(9,10,4));
	printf("%d\n",test(5,3,2));
	printf("%d\n",test(13,12,11));
	
}
int test(int x,int y, int z)
{
	int sum;
	if(x!=13 && y!=13 && z!=13)
	{
		sum=x+y+z;
		return sum;
	}
	else if(x==13 || y==13 || z==13)
	{
		return 0;
	}
}
