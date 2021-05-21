/*

25. Write a C program to check whether two or more non-negative given integers have the same rightmost digit. 
Expected Output:

1
1
0
*/
#include <stdio.h>
#include <stdlib.h>
int test(int ,int);
int main()
{
	printf("%d",test(23,33));
	printf("%d",test(77,87));
	printf("%d",test(44,25));
}
int test(int a, int b)
{
	if(a%10==b%10)
	return 1;
	else return 0;
}
