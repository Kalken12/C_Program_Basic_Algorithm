/*
15. Write a C program to count the number of two 5's are next to each other in an array of integers. 
Also count the situation where the second 5 is actually a 6. 
Expected Output:

1
2
1
*/
#include <stdio.h>
#include <stdlib.h>
int test(int, int[]);
int main()
{

		int array_size;
		int array1[]={1,5,5,3,2};
		array_size=sizeof(array1) / sizeof(array1[0]);
		printf("%d",test(array_size,array1));
		
		int array2[]={1,5,5,4,5,5};
		array_size=sizeof(array2)/sizeof(array2[0]);
		printf("%d",test(array_size,array2));
		
		
		int array3[]={1,3,5,6,1,2};
		array_size=sizeof(array3)/sizeof(array3[0]);
		printf("%d",test(array_size,array3));
		return 0;
}
   int test(int array_size, int array[])
{
	int i, count=0;
	for(i=0; i<=array_size-1;i++)
	{
		if(array[i]==5 && array[i+1]==5|| array[i+1]==6)
		{ 
		   count++;
		}
	}
	      return count;
}
