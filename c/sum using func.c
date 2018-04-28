#include <stdio.h>

    int main()
    {
        int a,b,sum;
        printf("Enter 2 numbers : ");
        scanf("%d %d",&a,&b);
        sum=add(a,b);
        printf("Sum = %d",sum);
        return 0;
    }

    int add(int a,int b)
    {
        return(a+b);
    }
