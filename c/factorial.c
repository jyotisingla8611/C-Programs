#include <stdio.h>

    int main()
    {
        int num,i,fact=1;
        printf("Enter a number : ");
        scanf("%d",&num);

        for(i=num;i>=2;i--)
        {
            fact*=i;
        }
        printf("%d",fact);

    }
