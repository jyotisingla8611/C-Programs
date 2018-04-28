#include <stdio.h>

    int main()
    {
        int i,num,sum=0;
        printf("Enter a number : ");
        scanf("%d",&num);

        sum=num%10;
        num/=10;
        while(num>9)
        {
            num/=10;
        }
        sum+=num;
        printf("%d",sum);
    }
