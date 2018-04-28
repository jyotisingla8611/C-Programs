#include <stdio.h>
int main()
{
int n,count=0;
printf("enter a number : ");
scanf("%d",&n);
while(n)//Brian's Method to find no. of 1 in a binary number
{
    n=n&(n-1);
    count++;
}
printf("%d",count);
}
/*
toggle the nth bit
left shift 1 by n-1 and take ex-or
==================================
find the number of leading and trailing zero in a number
*/
