#include <stdio.h>
    int main()
    {
        int num=0,oct=0,rem=0,i;
        printf("Enter a decimal number : ");
        scanf("%d",&num);
        // printf("Octal number : %d",oct);

        for(i=0;num;i++)
        {
            rem=num%8;
            oct+=pow(10,i)*rem;
            num=num/8;
        }
        printf("%d",oct);
    }
