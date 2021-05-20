
/*19. Write a C program to to test whether a given non-negative number is a multiple of 13 or it is one more than a multiple of 13. 
Expected Output:

1
1
1
0
*/
#include <stdio.h>
#include <stdlib.h>
int test(int);
int main()
{
	printf("%d\n",test(39));
	printf("%d\n",test(53));
	printf("%d\n",test(65));
	printf("%d\n",test(67));
	
}
int test(int num)
{
	if(num%13==0 || num%13==1)
	return 1;
	else return 0;
}
