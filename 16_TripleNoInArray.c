/*
16. Write a C program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple.
Expected Output:

0
0
1
*/
#include <stdio.h>
#include <stdlib.h>
int test(int , int[]);
int main()
{
	int  array_ele;
	int array1[]={1, 1, 2, 2, 1};
	array_ele= sizeof(array1)/sizeof(array1[0]);
	printf("%d\n",test(array_ele,array1));
	
	
	int array2[]={1, 1, 2, 1, 2, 3};
	array_ele= sizeof(array2)/sizeof(array2[0]);
	printf("%d\n",test(array_ele,array2));

	
	int array3[]={1, 1, 1, 2, 2, 2, 1 };
	array_ele= sizeof(array3)/sizeof(array3[0]);
	printf("%d\n",test(array_ele,array3));
	
	return 0;
}

int test( int array_ele, int  array[])
{
	int i;
	for(i=0;i<=array_ele-2;i++)
	{
		if(array[i] == array[i+1] && array[i] == array[i+2])
		return 1;
	
	}
	return 0;
}

