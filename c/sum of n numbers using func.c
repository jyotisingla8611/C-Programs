#include <stdio.h>
    int main()
    {
        int num;
        printf("Enter any natural number : ");
        scanf("%d",&num);
        sum(num);
        return 0;
    }

    void sum(int num)
    {
        int i,sum=0;
        for(i=num;i>0;i--)
        {
            sum=sum+i;
        }
        printf("Sum=%d",sum);
    }
