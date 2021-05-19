/*
8. Write a C program to check whether three given integer values are in the range 20..50 inclusive. 
Return true if 1 or more of them are in the said range otherwise return false.
Expected Output:

1
1
1
0
*/
#include <stdio.h>
#include <stdlib.h>
int test(int , int  , int);
int main()
{
	printf("%d\n",test(11, 20, 12));
	printf("%d\n",test(30, 30, 17));
	printf("%d\n",test(25, 35, 50));
	printf("%d\n",test(15, 12, 8));
	return 0;
}
int test(int x, int y , int z)
{
		return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
}
