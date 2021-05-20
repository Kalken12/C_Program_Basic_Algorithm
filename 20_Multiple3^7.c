
/*20. Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both. 
Expected Output:

1
1
0
*/
#include <stdio.h>
#include <stdlib.h>
int test(int);
int main()
{
	printf("%d\n",test(9)); 
    printf("%d\n",test(14));
	printf("%d\n",test(21));
	
}
int test(int num)
{
	return(num%3==0 ^ num%7==0);
	
}
