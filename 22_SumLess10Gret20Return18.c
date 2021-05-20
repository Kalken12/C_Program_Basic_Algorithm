/*
22. Write a C program to compute the sum of the two given integers. If one of the given integer value is in the range 10..20 inclusive return 18. 
Expected Output:

10
18
18
241
*/
#include <stdio.h>
#include <stdlib.h>
int test(int, int);
int main()
{
	printf("%d\n",test(5,5));
	printf("%d\n",test(11,1));
	printf("%d\n",test(12,5));
	printf("%d\n",test(100,141));
	
}
int test(int x, int y)
{
            return (x >= 10 && x <= 20) || (y >= 10 && y <= 20) ? 18 : x + y;
         
}
