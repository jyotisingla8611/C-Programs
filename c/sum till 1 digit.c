#include <stdio.h>

    int main()
    {
        int num,sum=0,temp=0;
        printf("Enter a number : ");
        scanf("%d",&num);

        while(num >= 10)
        {
            sum=0;
            while(num != 0)
            {
                temp=num%10;
                sum=sum + temp;
                num=num/10;
            }
            num=sum;
        }
        printf("\n%d",num);
        return 0;
    }
