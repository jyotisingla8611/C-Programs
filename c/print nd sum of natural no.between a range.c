#include <stdio.h>

    int main()
    {
        int num1, num2,i=0,sum=0;
        printf("Enter 2 natural numbers : ");
        scanf("%d %d",&num1,&num2);

        printf("Numbers : \n");
        i=num1;
        while(i<=num2)
        {
           printf("%d\n",i);
           sum+=i;
           i++;
        }
        printf("Sum = %d",sum);
        return 0;
    }
