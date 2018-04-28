#include <stdio.h>

    int main()
    {
        int a=0,b=1,c=0,num,count=0;
        printf("Enter no. : ");
        scanf("%d",&num);
        for(count=1;count<=num;count++)
        {
            printf("%d\t",c);
            a=b;
            b=c;
            c=a+b;

        }
    }
