/*
13. Write a C program to check if two given non-negative integers have the same last digit. 
Expected Output:
0
1
1
0
*/
#include <stdio.h>
int test(int , int);
void main()
{
	printf("%d\n",test(12, 13));
	printf("%d\n",test(12, 22));
	printf("%d\n",test(33, 43));
	printf("%d\n",test(22, 14));
}
int test(int x, int y)
{
	int digit1= x%10;
	  
	int	digit2 = y%10 ;
	if(digit1==digit2)
	{
		return 1;
	}else 
	return 0;
}
