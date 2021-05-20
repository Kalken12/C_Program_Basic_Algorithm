/*
18. Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5. 
Expected Output:

1
0    //a b a==5 ||b==5 ||a-b==5
1
*/
#include <stdio.h>
#include <stdlib.h>
int test(int , int);
int main()
{
	printf("%d\n",test(5,4));
	printf("%d\n",test(3,6));
	printf("%d\n",test(10,5));
}
int test(int a, int b)
{
	if(a==5 ||b==5 || a-b==5 || b-a==5)
	return 1;
	else return 0;
}
