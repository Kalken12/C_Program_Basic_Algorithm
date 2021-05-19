/*
10. Write a C program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal. 
Expected Output:

95
0
99
*/
#include <stdio.h>
int test(int, int);
int main()
{
	printf("%d\n",test(95, 1 ));
	printf("%d\n",test(6, 6));
	printf("%d\n",test(45, 92));
}
int test(int x, int y)
{
	int n=100;
	int value1=(n-x);
	int value2=(n-y);
	return (value1==value2)? 0 : (value2>value1? x:y);
}
