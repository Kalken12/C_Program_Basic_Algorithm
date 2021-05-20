/*
24. Write a C program to check whether y is greater than x, and z is greater than y from three given integers x,y,z.
Expected Output:

1
1
0
*/
#include <stdio.h>
#include <stdlib.h>      //  z>y>x  // z>y>x  
int test(int, int, int);
int main()
{
	printf("%d\n",test(3,4,5));
	printf("%d\n",test(10,20,30));
	printf("%d\n",test(15,20,5));
	
}
int test(int x, int y, int z)
{
	 return (y>x && z>y)? 1:0;
	
}
