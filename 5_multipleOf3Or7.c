/*
5. Write a C program to check whether a given positive number is a multiple of 3 or a multiple of 7. 
Expected Output:

1
1
1
0
*/
#include <stdio.h>
void main()
{

	printf("%d\n",test(21));
	printf("%d\n",test(9));
	printf("%d\n",test(28));
	printf("%d\n",test(4));
}
int test(int n)
{
	if((n%3==0)||(n%7==0))
	{
		return 1;
	}else
	return 0;
	
}
