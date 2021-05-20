/*

21. Write a C program to check whether a given number is within 2 of a multiple of 10.
Expected Output:

0
0
1
1
*/
#include <stdio.h>
#include <stdlib.h>
int test(int);
int main()
{
	
    printf("%d",test(3));
    printf("\n%d",test(7));
    printf("\n%d",test(8));
    printf("\n%d",test(21));
}   
    
int test(int n)

{

         {
            return n % 10 <= 2 || n % 10 >= 8;
         }
}
