/*
7. Write a C program to check two given integers whether either of them is in the range 100..200 inclusive. 
Expected Output:
1
0
1
*/
#include <stdio.h>
int test(int, int);
void main()
{
	printf("%d\n",test(100, 199));
	printf("%d\n",test(250, 300));
	printf("%d\n",test(105, 190));
	
}
int test(int n1, int n2)
{
	return (n1>=100 && n2<=200) || (n1>=100 && n2<=200);

	
}
