/*
9. Write a C program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the said range otherwise false.
Expected Output:

1
1
1
0
*/
#include <stdio.h>
#include <stdlib.h>
int test(int , int );
int main()
{
	printf("%d\n",test(11, 20));
	printf("%d\n",test(30, 30));
	printf("%d\n",test(25, 35));
	printf("%d\n",test(15, 12));
	return 0;
}
int test(int x, int y )
{
		return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) ;
}

