/*
27. Write a C program to find the larger from two given integers. However if the two integers have the same remainder when divided by 5, 
then the return the smaller integer. If the two integers are the same, return 0.
Expected Output:

11                 //if(a>b) large==a  small = b    elseif(b>a) large==b , small =a,   elseif(a%5==b%5) return small;  a==b return 0
20
0
*/
#include <stdio.h>
#include <stdlib.h>
int test(int, int );
int main()
{
	printf("%d\n",test(11,21));
	printf("%d\n",test(30,20));
	printf("%d\n",test(15,15));
}
int test(int a, int b)
{
	int small,large;
	if(a>b)
	{
		small=b;
		large=a;
	}
	else if(b>a)
	
	{
		small=a;
		large=b;
		
	}
	 else if(a==b)
	{
		return 0;
	}
	
	if(a%5==b%5)
	{
		return small;
	} 
	

}
