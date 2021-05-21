/*
28. Write a C program to check two given integers, each in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33. 
Expected Output:

1
0
1
*/
#include <stdio.h>
#include<stdlib.h>
int test(int , int);
int main()
{
	printf("%d",test(13,33));
	printf("%d",test(12,45));
	printf("%d",test(45,53));
}
int test(int x, int y)

{
    return x / 10 == y / 10 || x / 10 == y % 10 || x % 10 == y / 10 || x % 10 == y % 10;
}

