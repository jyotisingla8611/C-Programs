//Program to swap 2 numbers...
#include <stdio.h>
    int main()
    {
        int num1=0,num2=0,temp=0;
        printf("Enter 2 numbers : ");
        scanf("%d %d",&num1,&num2);
        /*temp=num1;
        num1=num2;
        num2=temp;*/
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;
        printf("num1=%d num2=%d",num1,num2);

    }
