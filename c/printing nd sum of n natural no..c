#include <stdio.h>

    int main()
    {
        int num,i=1,sum=0;
        printf("Enter any natural number : ");
        scanf("%d",&num);

        printf("Numbers :\n");
        while(i<=num)
        {
            printf("%d\n",i);
            sum+=i;
            i++;
        }
        printf("Sum = %d",sum);
    }
