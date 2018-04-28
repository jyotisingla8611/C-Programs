#include <stdio.h>
    int main()
    {
        int num,sum=0,temp,a;
        printf("Enter number : ");
        scanf("%d",&num);

        temp=num;
        while(temp)
        {
            a=temp%10;
            sum+= a*a*a;
            temp/=10;
        }
        if(sum==num)
        {
            printf("Armstrong number..");
        }else
        {
            printf("Not a Armstrong number..");
        }
        return 0;
    }
