/*
23. Write a C program to check whether it is possible to add two integers to get the third integer from three given integers.
Expected Output:

1
0
1
*/
#include <stdio.h>
#include <stdlib.h>
int test(int, int, int);
int main()
{
	printf("%d\n",test(1,2,3));
	printf("%d\n",test(4,5,6));
	printf("%d\n",test(-1,0, 1));

	
}
int test(int x, int y, int z)
{
	if( x==y+z || y== z+x || z== x+y)
	{
		return 1;
	}
	else return 0;
}
