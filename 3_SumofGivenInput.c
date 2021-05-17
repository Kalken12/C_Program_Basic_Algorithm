/*
3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
Expected Output:

1
1
0
*/
#include <stdio.h>
int test(int, int);
void main()
{
	printf("%d",test(29, 1));
	printf("%d",test(30,1));
	printf("%d",test(2,3));
	
}
int test(int x, int y)
{
	if(x+y==30)
	{
		return 1;
	}
	else if(x==30 ||y==30)
	{
		return 1;
	}
	return 0;
}
