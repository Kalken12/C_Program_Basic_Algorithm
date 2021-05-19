/*
6. Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100. 
Expected Output:
1
1
0
*/
#include <stdio.h>
int test(int, int);
void main()
{
	printf("%d\n",test(-1,120));
	printf("%d\n",test(120,-1));
	printf("%d\n",test(2, 20);
}
int test(int n,int n1)

{
	return( (n<0)&&(n1>100)||(n>100)&&(n1<0));
//eturn temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;

}
